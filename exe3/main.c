#include "hardware/gpio.h"
#include "pico/stdlib.h"
#include <stdio.h>

int LED_R = 4;
int LED_G = 6;
int BUTTON_R = 28;
int BUTTON_G = 26;
int main() {
  stdio_init_all();
  gpio_init(LED_R);
  gpio_init(LED_G);
  gpio_init(BUTTON_R);
  gpio_init(BUTTON_G);

  gpio_set_dir(LED_R, GPIO_OUT);
  gpio_set_dir(LED_G, GPIO_OUT);
  gpio_set_dir(BUTTON_R, GPIO_IN);
  gpio_set_dir(BUTTON_G,GPIO_IN);

  gpio_pull_up(BUTTON_R);
  gpio_pull_up(BUTTON_G);

  while (true) {
    
  }
}
