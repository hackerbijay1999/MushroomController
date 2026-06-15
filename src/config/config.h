#pragma once

// =========================
// Firmware
// =========================
#define FW_VERSION "0.0.1"

// =========================
// Device
// =========================
#define DEVICE_PREFIX "CP-MUSH"

// =========================
// WiFi Manager
// =========================
#define WIFI_AP_NAME "MushroomController"
#define WIFI_AP_PASSWORD "12345678"

// =========================
// MQTT
// =========================
#define MQTT_DEFAULT_PORT 1883

// =========================
// OLED
// =========================
#define OLED_ADDRESS 0x3C

// =========================
// Timers (milliseconds)
// =========================
#define RTC_UPDATE_INTERVAL       1000
#define SENSOR_READ_INTERVAL      1000
#define MQTT_PUBLISH_INTERVAL     5000
#define DISPLAY_UPDATE_INTERVAL   1000

// =========================
// Default Setpoints
// =========================
#define DEFAULT_TEMP_SETPOINT      30.0
#define DEFAULT_HUMIDITY_SETPOINT  95.0
#define DEFAULT_CO2_SETPOINT       1500