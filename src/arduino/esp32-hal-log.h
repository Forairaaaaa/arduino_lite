// Copyright 2015-2016 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#ifndef __ARDUHAL_LOG_H__
#define __ARDUHAL_LOG_H__

#ifdef __cplusplus
extern "C"
{
#endif
#include <esp_log.h>

#define log_e(format, ...) ESP_LOGE("al", format, ##__VA_ARGS__)
#define log_w(format, ...) ESP_LOGW("al", format, ##__VA_ARGS__)
#define log_i(format, ...) ESP_LOGI("al", format, ##__VA_ARGS__)
#define log_d(format, ...) ESP_LOGD("al", format, ##__VA_ARGS__)
#define log_v(format, ...) ESP_LOGV("al", format, ##__VA_ARGS__)
#define isr_log_e(format, ...) ESP_EARLY_LOGE("al", format, ##__VA_ARGS__)
#define isr_log_w(format, ...) ESP_EARLY_LOGW("al", format, ##__VA_ARGS__)
#define isr_log_i(format, ...) ESP_EARLY_LOGI("al", format, ##__VA_ARGS__)
#define isr_log_d(format, ...) ESP_EARLY_LOGD("al", format, ##__VA_ARGS__)
#define isr_log_v(format, ...) ESP_EARLY_LOGV("al", format, ##__VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif /* __ESP_LOGGING_H__ */
