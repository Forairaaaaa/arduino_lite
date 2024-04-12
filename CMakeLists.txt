# CMakeLists.txt of ARDUINO_LITE component

# Src files
file(GLOB_RECURSE ARDUINO_LITE_SRCS
    src/*.c
    src/*.cpp
)
# Include
set(ARDUINO_LITE_INCS
    src/cores/
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
add_definitions(-DNO_GLOBAL_INSTANCES)
