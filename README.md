# Google Play App Stats on Elecrow 5.79" ePaper Display

This project tests the Elecrow 5.79" ePaper display (272x792 resolution, Black/White) by displaying Google Play app statistics. The data is updated once a day and generated using a Python script that scrapes Google Play app data from the store.

![Preview](preview.jpg?raw=true "preview")

## Hardware

- **Elecrow 5.79" ePaper Display**
  - Resolution: 272x792
  - Color: Black/White
  - SPI Interface (Dual SSD1683 drivers)
  - Powered by an ESP32-S3

[`More information about the Elecrow ePaper display`](https://www.elecrow.com/crowpanel-esp32-5-79-e-paper-hmi-display-with-272-792-resolution-black-white-color-driven-by-spi-interface.html)

## Features

- **Daily Google Play Stats**: Displays updated app stats, downloads, and other relevant statistics once a day.
- **Test Setup for ePaper Display**: This project is primarily for testing the display functionality.
- **Low Power Potential**: Although currently not battery-powered, the project could be optimized for low power consumption since the display only needs to be updated once per day. The ESP32's low power modes are not yet implemented.

## Software

### Google Play Data Scraper
The data is collected via a Python script that scrapes app statistics from the Google Play Store. The script retrieves:
- App name
- Version
- Installs
- & more

Repository for the data scraper: [`Google Play Scraper`](https://github.com/fbiego/google-play-scraper)

### Display UI
The display interface is built using LVGL 9 with the help of the SquareLine Studio UI designer.

[`Watch the Elecrow ePaper Display and LVGL 9 UI tutorial`](https://youtu.be/uhhUpfdYflc)


## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.


