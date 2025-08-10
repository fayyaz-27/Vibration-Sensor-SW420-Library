// Project Name: SW420 Vibration Sensor Module: Application Code
// Author: Fayyaz Nisar Shaikh
// LinkedIn: https://www.linkedin.com/in/fayyaz-shaikh-7646312a3/
// Email: fayyaz.shaikh7862005@gmail.com
// Phone: +91 8591686239

#include "stdio.h"

#include "esp_system.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "esp_rom_sys.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

#include "driver.h"

#define TAG "SW420"

void app_main(void){

uint8_t read_gpio = 4;
uint8_t write_gpio = 2;
uint8_t virtual_voltage = 14;
uint8_t virtual_ground = 27;


gpio_set_direction(write_gpio, GPIO_MODE_OUTPUT);
gpio_set_direction(read_gpio, GPIO_MODE_INPUT);

gpio_set_direction(virtual_ground, GPIO_MODE_OUTPUT);
gpio_set_direction(virtual_voltage, GPIO_MODE_OUTPUT);

    gpio_set_level(virtual_voltage, 1);
    gpio_set_level(virtual_ground, 0);



sw420_init(read_gpio);

while(1)
{
    uint8_t status = read_vibration(read_gpio);

    if(status == 1){
        gpio_set_level(write_gpio, 1);
        ESP_LOGI(TAG, "Vibration Detected at D4 !!!");
        vTaskDelay(pdMS_TO_TICKS(10));
        gpio_set_level(write_gpio, 0);
    }
        vTaskDelay(pdMS_TO_TICKS(10));
}

}