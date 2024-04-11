# CMakeLists.txt of ARDUINO_LITE component

# Src files
file(GLOB_RECURSE ARDUINO_LITE_SRCS
    src/*.c
    src/*.cpp
)
# Include
set(ARDUINO_LITE_INCS
    src/
)

# Public component requirement
set(ARDUINO_LITE_REQUIRES
    driver
    esp_timer
)

# Private component requirement
set(ARDUINO_LITE_PRIV_REQUIRES
)

# Register component
idf_component_register(
    SRCS ${ARDUINO_LITE_SRCS}
    INCLUDE_DIRS ${ARDUINO_LITE_INCS}
    REQUIRES ${ARDUINO_LITE_REQUIRES}
    PRIV_REQUIRES ${ARDUINO_LITE_PRIV_REQUIRES}
)
