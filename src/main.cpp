////api key 6990d2b6a2c248889d35b7506e9b9062
// https://newsapi.org/docs/get-started

#include <Arduino.h>

#include <WiFi.h>
#include <WiFiMulti.h>
#include <HTTPClient.h>
#include <ArduinoJson.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <time.h> // include the time.h library

/* WiFi settings */
#define SSID_NAME "Your Wifi Name"
#define SSID_PASSWORD "Your Wifi Password"

WiFiUDP ntpUDP;

// You can specify the time server pool and the offset (in seconds, can be
// changed later with setTimeOffset() ). Additionally you can specify the
// update interval (in milliseconds, can be changed using setUpdateInterval() ).
NTPClient timeClient(ntpUDP);

// OpenWeatherMap API key
String openWeatherMapApiKey = "cc81beca1e8ddf347b5ff6595cd61362";
// Example API key: String openWeatherMapApiKey = "00c7969671a44223ca44f";

// News API API key
String newsapiKey = "Your News API Key";
// Example API key: String openWeatherMapApiKey = "b96dw32resfgdhyrww578de";

// Replace with the actual city and country code
String city = "Amsterdam";     // City name
String countryCode = "1091GP"; // Country code of the city

#define uS_TO_S_FACTOR 1000000ULL                                         /* Conversion factor for micro seconds to seconds */
#define TIME_TO_SLEEP 2000 /* Time ESP32 will go to sleep (in seconds) */ // MAX is 2147483647us (35.79) minutes

DynamicJsonDocument docs(19508);

#include "lvgl.h"

#include "ui/ui.h"

#define ENABLE_GxEPD2_GFX 0
#include <GxEPD2_BW.h>

GxEPD2_BW<GxEPD2_579_GDEY0579T93, GxEPD2_579_GDEY0579T93::HEIGHT> display(GxEPD2_579_GDEY0579T93(/*CS=5*/ 45, /*DC=*/46, /*RST=*/47, /*BUSY=*/48)); // GDEY0579T93 792x272, SSD1683 (FPC-E004 22.04.13)

#define GxEPD2_DISPLAY_CLASS GxEPD2_BW
#define GxEPD2_DRIVER_CLASS GxEPD2_579_GDEY0579T93 // GDEY0579T93 792x272, SSD1683 (FPC-E004 22.04.13)

#define SCR_WIDTH 792
#define SCR_HEIGHT 272
#define LVBUF ((SCR_WIDTH * SCR_HEIGHT / 8) + 8) // increased buffer

static lv_display_t *lvDisplay;
static uint8_t lvBuffer[2][LVBUF];
WiFiMulti wifiMulti;

bool screen, data; // flags for data
// String title1;

void my_disp_flush(lv_display_t *disp, const lv_area_t *area, unsigned char *data)
{
  int16_t width = area->x2 - area->x1 + 1;
  int16_t height = area->y2 - area->y1 + 1;
  display.drawImage((uint8_t *)data + 8, area->x1, area->y1, width, height);

  lv_display_flush_ready(disp);
  // flushing complete when bottom right area flushed
  screen = (area->x1 + width == SCR_WIDTH) && (area->y1 + height == SCR_HEIGHT);
}

static uint32_t my_tick(void)
{
  return millis();
}

void epd_setup()
{

  SPI.begin(12, -1, 11, 45);

  display.init(115200, true, 2, false);

  if (display.pages() > 1)
  {
    delay(100);
    //Serial.print("pages = ");
    //Serial.print(display.pages());
    //Serial.print(" page height = ");
    //Serial.println(display.pageHeight());
    delay(1000);
  }
  // display.clearScreen(); return;
  //  first update should be full refresh

  delay(1000);
}

void getTime()
{

  timeClient.begin();
  timeClient.update();


  String tempTime = timeClient.getFormattedTime();
  
  //Serial.println(tempTime.substring(0, 6));

  lv_label_set_text(ui_time, tempTime.substring(0, 5).c_str());

  String tempDate = timeClient.getFormattedDate();
  int year = tempDate.substring(0, 4).toInt();
  int month = tempDate.substring(5, 7).toInt();
  int day = tempDate.substring(8, 10).toInt();

  lv_calendar_set_today_date(ui_Calendar1, year, month, day);
  lv_calendar_set_showed_date(ui_Calendar1, year, month);

  //Serial.println(" last ");
  //Serial.println(tempDate.substring(0, 4).toInt());
  //Serial.println(tempDate.substring(5, 7).toInt());
  //Serial.println(tempDate.substring(8, 10).toInt());

  //Serial.println(" full ");
  //Serial.println(tempDate);
  data = true;



  long epochTime = timeClient.getEpochTime();
  //Serial.println(epochTime);

  // Convert the UNIX timestamp to a tm structure
  time_t t = epochTime;
  struct tm *tm = localtime(&t);

  // Set the RTC time using the settimeofday function
  struct timeval tv;
  tv.tv_sec = epochTime;
  tv.tv_usec = 0;
  settimeofday(&tv, 0);
}

void getData()
{

  String serverPath = "https://newsapi.org/v2/top-headlines?country=us&apiKey=" + newsapiKey;

  HTTPClient http;
  http.begin(serverPath.c_str());
  int code = http.GET();
  String response = http.getString();
  DeserializationError error = deserializeJson(docs, response);

  if (code == HTTP_CODE_OK)
  {
    // deserializeJson(apps, payload);
    data = true;
  }

  if (error)
  {
    // Serial.println("Error parsing news data");
    return;
  }

  // Extract the "title" field from the first article
  JsonArray articles = docs["articles"];

  // Display the title of each article
  // Sometimes items are removed from their sources. Below is for handling that
  int i = 0;

  while (articles[i]["title"] == "[Removed]")
  {
    i ++;
  }

  String title1 = articles[i]["title"];
  lv_label_set_text(ui_title1, title1.c_str());

  String description1 = articles[i]["content"];
  lv_label_set_text(ui_description1, description1.c_str());
  i ++; //go to next item and do the same.

 while (articles[i]["title"] == "[Removed]")
  {
    i ++;
  }

  String title2 = articles[i]["title"];
  lv_label_set_text(ui_title2, title2.c_str());

  String description2 = articles[i]["content"];
  lv_label_set_text(ui_description2, description2.c_str());

  http.end();
}

void getWeather()
{

  /*   String city = "Amsterdam";     // City name
  String countryCode = "1091GP"; // Country code of the city
   */
  // Build the OpenWeatherMap API request URL
  String serverPath = "http://api.openweathermap.org/data/2.5/weather?q=" + city + "," + countryCode + "&APPID=" + openWeatherMapApiKey + "&units=metric";

  HTTPClient http;
  http.begin(serverPath.c_str());
  int code = http.GET();
  String response = http.getString();
  DeserializationError error = deserializeJson(docs, response);

  if (code == HTTP_CODE_OK)
  {

    String temp = docs["main"]["temp"];
    String hum = docs["main"]["humidity"];
    String visibility = docs["visibility"];
    String wind = docs["wind"]["speed"];
    String description = docs["weather"][0]["description"];

    //Serial.println("hum");
    //Serial.println(hum);
    //Serial.println("description");
    //Serial.println(description);
    //Serial.println("temp");
    //Serial.println(temp);
    //Serial.println("visibility");
    //Serial.println(visibility);
    //Serial.println("wind");
    //Serial.println(wind);

    lv_label_set_text(ui_description3, description.c_str());
    lv_label_set_text(ui_temp, temp.c_str());
    lv_label_set_text(ui_windspeed, wind.c_str());
    lv_label_set_text(ui_visibility, visibility.c_str());
    lv_label_set_text(ui_humidity, hum.c_str());



/*     lv_label_set_text(ui_description3, description.c_str());
    lv_label_set_text(ui_temp, (temp+"C").c_str());
    lv_label_set_text(ui_windspeed, (wind+"km/h").c_str());
    lv_label_set_text(ui_visibility, (visibility+"m").c_str());
    lv_label_set_text(ui_humidity, (hum+"%").c_str());

 */
    data = true;
  }

  if (error)
  {
    //Serial.println("Error parsing news data");
    return;
  }

  http.end();
}

void setup()
{

  Serial.begin(115200);

  wifiMulti.addAP(SSID_NAME, SSID_PASSWORD);
  wifiMulti.addAP(SSID_NAME, SSID_PASSWORD);
  wifiMulti.addAP(SSID_NAME, SSID_PASSWORD);

  while (wifiMulti.run() != WL_CONNECTED)
  {
    //Serial.print(".");
    delay(500);
  }
  //Serial.println("");
  //Serial.println("WiFi connected: ");
  //Serial.println(WiFi.SSID());
  //Serial.println("IP address: ");
  //Serial.println(WiFi.localIP());

  delay(500);

  // update display data fetch was successful
  if (1)
  {

    // Initialization settings, executed once when the program starts
    pinMode(7, OUTPUT);    // Set pin 7 to output mode
    digitalWrite(7, HIGH); // Set pin 7 to high level to activate the screen power

    epd_setup();

    lv_init();

    lv_tick_set_cb(my_tick);

    lvDisplay = lv_display_create(SCR_WIDTH, SCR_HEIGHT);
    lv_display_set_flush_cb(lvDisplay, my_disp_flush);
    lv_display_set_buffers(lvDisplay, lvBuffer[0], lvBuffer[1], LVBUF, LV_DISPLAY_RENDER_MODE_PARTIAL);

    /*      lv_obj_t *label1 = lv_label_create(lv_scr_act());
         lv_obj_set_align(label1, LV_ALIGN_CENTER);
         lv_obj_set_width(label1, 400);
         lv_label_set_text(label1, "@Makersfunduck CrowPanel ESP32 E-Paper 5.79-inch Arduino LVGL 9 port!");
         lv_obj_set_style_text_align(label1, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
         lv_obj_set_style_text_font(label1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

     */

    ui_init();






    getData();
    getTime();
    getWeather();
    lv_obj_set_style_text_color(ui_Calendar1, lv_color_make(0x00, 0x00, 0x00), LV_PART_MAIN | LV_STATE_DEFAULT);

    while (!screen)
    {

      delay(1000);
      lv_timer_handler(); // Update the UI-
    }

    lv_deinit();
    digitalWrite(7, LOW); // Set pin 7 to low level to deactivate the screen power
    //Serial.println("Getting sleepy");
    esp_sleep_enable_timer_wakeup(TIME_TO_SLEEP * uS_TO_S_FACTOR); // sleep for 30 minutes
    esp_deep_sleep_start();
  }
}

void loop()
{
  
}
