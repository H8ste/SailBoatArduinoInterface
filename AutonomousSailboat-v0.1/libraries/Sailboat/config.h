#ifndef CONFIG_H
#define CONFIG_H

/**SENSORS**/
/***********/
#define NB_SENSORS		3

#define SENSOR_WINDSENSOR	0
#define SENSOR_GPS			1
#define SENSOR_IMU			2

//PIN//
//////
//WIND
#define WIND_SENSOR_PIN A0
//GPS
#define GPS_RX 10
#define GPS_TX 11

//CONFIG//
/////////
//GPS
#define GPS_BAUD_RATE	9600
#define EARTH_RADIUS	6371000  // Earth radius in metres


/**ACTUATORS**/
/***********/
#define NB_ACTUATORS		2

#define ACTUATOR_RUDDER		0
#define ACTUATOR_SAIL		1

//PIN//
//////
//RUDDER
#define RUDDER_PIN 7
//SAIL
#define WINCH_PIN 8

/*MISC*/
/******/
//PIN//
//////
//LCD I2C
#define LCD_SCREEN_ADDRESS	0x3f
//RC
#define RC_PIN_1 10   // Pin 10 Connected to Channel-1 of Transmitter
#define RC_PIN_2 11   // Pin 11 Connected to Channel-3 of Transmitter
#define RC_PIN_3 12   // Pin 12 Connected to Channel-5 of Transmitter
// RTC Module: I2C bus
// SDA pin 20
// SCL pin 21


// SD card: SD card attached to SPI bus as follows:
#ifdef SD_ACTIVATED
  // SD module:   |    Arduino:
  //    MISO    =====    PIN 50 / ICSP 1
  //    MOSI    =====    PIN 51 / ICSP 4
  //    CLK     =====    PIN 52 / ICSP 3
#define SD_PIN_CHIP_SELECT 53  // CS
#endif

#endif