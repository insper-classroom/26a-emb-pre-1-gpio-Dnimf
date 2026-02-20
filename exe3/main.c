#include "hardware/gpio.h"
#include "pico/stdlib.h"
#include <stdio.h>

const int LED_R = 4;
const int LED_G = 6;
const int BUTTON_R = 28;
const int BUTTON_G = 26;
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
  int LIG_R = 0;
  int LIG_G = 0;
  while (true) {
    if (!gpio_get(BUTTON_R)) {
      if(LIG_R==0){
        LIG_R=1;
      }else{LIG_R=0;}
      gpio_put(LED_R,LIG_R);
      while (!gpio_get(BUTTON_R)) {
      };
    }
    if(!gpio_get(BUTTON_G)){
      if(LIG_G==0){
        LIG_G=1;
      }else{LIG_G=0;}
      gpio_put(LED_G,LIG_G);
      while (!gpio_get(BUTTON_G)){
      };
    }
  }
}
