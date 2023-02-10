#ifndef RFID_MAIN_H
#define RFID_MAIN_H

#include "nrf_gpio.h"

#include "rc522.h"
#include "nfc_14a.h"
#include "nfc_mf1.h"
#include "lf_tag_em.h"
#include "bsp_time.h"
#include "bsp_delay.h"
#include "mf1_toolbox.h"
#include "tag_emulation.h"
#include "lf_em410x_data.h"
#include "lf_125khz_radio.h"
#include "lf_reader_main.h"
#include "hw_connect.h"



// 通用场灯的操作定义
#define TAG_FIELD_LED_ON()     nrf_gpio_pin_clear(LED_FIELD);
#define TAG_FIELD_LED_OFF()    nrf_gpio_pin_set(LED_FIELD);


typedef enum {
    DEVICE_MODE_NONE,
    DEVICE_MODE_READER,
    DEVICE_MODE_TAG,
} device_mode_t;

// functions define
void init_leds(void);
void light_up_by_slot(void);
void reader_mode_enter(void);
void tag_mode_enter(void);
void set_slot_light_color(uint8_t color);
device_mode_t get_device_mode(void);

#endif
