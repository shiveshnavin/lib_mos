#include "mgos.h"
#include "mgos_pwm.h"

bool is2(int no)
{

	return no==2;

}


bool mgos_lib_mos_init(void) {

  printf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library Log"));  
  mgos_gpio_set_mode(4, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(16, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(5, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(19, MGOS_GPIO_MODE_OUTPUT);

  mgos_pwm_set(4,200,0.8);
  mgos_pwm_set(16,200,0.8);
  mgos_pwm_set(5,200,0.8);
  mgos_pwm_set(19,200,0.8);
/*
 struct mgos_pwm_rgb_led led;
 mgos_pwm_rgb_led_init(&led, 4, 16, 5);
 mgos_pwm_rgb_led_set(&led, 255, 255, 255, 250); */



  return true;
}
