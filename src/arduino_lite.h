/**
 * @file arduino_lite.h
 * @author Forairaaaaa
 * @brief
 * @version 0.1
 * @date 2024-04-11
 *
 * @copyright Copyright (c) 2024
 *
 */
#pragma once
#include "arduino/esp32-hal.h"

void tone(uint8_t _pin, unsigned int frequency, unsigned long duration = 0);
void noTone(uint8_t _pin);
