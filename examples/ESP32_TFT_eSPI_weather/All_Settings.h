//  Use the DarkSkyWeather library: https://github.com/Bodmer/DarkSkyWeather

//  The weather icons and fonts are in the sketch data folder, press Ctrl+K
//  to view.

//  Upload the fonts and icons to SPIFFS using the "Tools"  "ESP32 Sketch Data Upload"
//  menu option in the IDE.
//  To add this option follow instructions here for the ESP32:
//  https://github.com/me-no-dev/arduino-esp32fs-plugin

//  Close the IDE and open again to see the new menu option.

//////////////////////////
// Setttings defined below

#define WIFI_SSID "Your_SSID"
#define PASSWORD "Your_password"

#define TIMEZONE UK // See NTP_Time.h tab for other "Zone references", UK, usMT etc

// Update every 15 minutes, up to 1000 request per day are free (viz average of ~40 per hour)
const int UPDATE_INTERVAL_SECS = 2 * 60UL; // 2 minutes

// Pins for the TFT interface are defined in the User_Config.h file inside the TFT_eSPI library

// For units codes see https://darksky.net/dev/docs
const String units = "si";

// Sign up for an account at Dark Sky, changes x's to your API key
const String api_key = "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx";

// For language codes see https://darksky.net/dev/docs
const String language = "en"; // Default language = en = English

// Set the geolocation for the forecast
const String latitude =  "27.9881"; // 90.0000 to -90.0000 negative for Southern hemisphere
const String longitude = "86.9250"; // 180.000 to -180.000 negative for West

// Set the small and large anti-aliased fonts used for the display
// A processing sketch to create new fonts can be found in the Tools folder of TFT_eSPI
// https://github.com/Bodmer/TFT_eSPI/tree/master/Tools/Create_Smooth_Font/Create_font
#define AA_FONT_SMALL "fonts/NotoSansBold15"
#define AA_FONT_LARGE "fonts/NotoSansBold36"
