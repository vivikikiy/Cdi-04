#include <stdio.h>
#include "pico/stdlib.h"

int main() {
  
  gpio_init(25);
  gpio_set_dir(1,false);
  gpio_set_dir(25,true);

  while (true) {
    char a= gpio_get(1);
    if(a==1) {

      char b= gpio_get(25);
   
      if(b==1) {
        gpio_put(25,false);
      }
      else {
        gpio_put(25,true)  ;   
      }
    }
    sleep_ms(500);
  }
}