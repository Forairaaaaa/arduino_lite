# CMakeLists.txt of ARDUINO_LITE component

# Src files
file(GLOB_RECURSE ARDUINO_LITE_SRCS
    src/*.c
    src/*.cpp
)
# Include
set(ARDUINO_LITE_INCS
    src/cores/
    src/libraries/AsyncUDP/src
    src/libraries/BLE/src
    src/libraries/BluetoothSerial/src
    src/libraries/DNSServer/src
    src/libraries/EEPROM/src
    src/libraries/ESP_I2S/src
    src/libraries/ESP_SR/src
    src/libraries/ESP32/src
    src/libraries/ESPmDNS/src
    src/libraries/Ethernet/src
    src/libraries/FFat/src
    src/libraries/FS/src
    src/libraries/HTTPClient/src
    src/libraries/LittleFS/src
    src/libraries/Insights/src
    src/libraries/NetBIOS/src
    src/libraries/Preferences/src
    src/libraries/SimpleBLE/src
    src/libraries/SPIFFS/src
    src/libraries/SPI/src
    src/libraries/Ticker/src
    src/libraries/USB/src
    src/libraries/WebServer/src
    src/libraries/WiFiClientSecure/src
    src/libraries/WiFi/src
    src/libraries/WiFiProv/src
    src/libraries/Wire/src
)

# Public component requirement
set(ARDUINO_LITE_REQUIRES
    spi_flash
    esp_partition
    mbedtls
    wifi_provisioning
    wpa_supplicant
    esp_adc
    esp_eth
    http_parser
    esp_http_client
)

# Private component requirement
set(ARDUINO_LITE_PRIV_REQUIRES
    fatfs
    nvs_flash
    app_update
    spiffs
    bootloader_support
    bt
    esp_hid
)

# Register component
idf_component_register(
    SRCS ${ARDUINO_LITE_SRCS}
    INCLUDE_DIRS ${ARDUINO_LITE_INCS}
    REQUIRES ${ARDUINO_LITE_REQUIRES}
    PRIV_REQUIRES ${ARDUINO_LITE_PRIV_REQUIRES}
)

# Defines
add_definitions(
    -DNO_GLOBAL_INSTANCES
    -DCONFIG_ARDUINO_UDP_TASK_PRIORITY=3
    -DCONFIG_ARDUINO_UDP_RUNNING_CORE=1
    -DCONFIG_ARDUINO_EVENT_RUNNING_CORE=0
)
