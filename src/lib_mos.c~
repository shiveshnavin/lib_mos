#include "mgos.h"
#include "mgos_pwm.h"

bool is2(int no)
{

	return no==2;

}
void setrgbw(float r,float g,float b,float w){

  mgos_pwm_set(4,200,r);
  mgos_pwm_set(16,200,g);
  mgos_pwm_set(5,200,b);
  mgos_pwm_set(19,200,w);

}


bool is_firmware_loaded()
{
//todo
return false;
}

int RED=1,GREEN=2,BLUE=3;
int curColor=RED;
bool mgos_lib_mos_init(void) {

  printf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library Log"));  
  mgos_gpio_set_mode(4, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(16, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(5, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(19, MGOS_GPIO_MODE_OUTPUT);


//in timer loop
	if(is_firmware_loaded()){
		
		if(curColor==RED)
		{

		curColor=GREEN;
		setrgbw(0,1,0,0);

		}
		else if(curColor==GREEN)
		{

		curColor=BLUE;
		setrgbw(0,0,1,0);

		}
		else if(curColor==BLUE{


		curColor=RED;
		setrgbw(1,0,0,0);

		}
		else{

		curColor=RED;
		setrgbw(1,0,0,0);

		}

	}
 
 	
/*
 struct mgos_pwm_rgb_led led;
 mgos_pwm_rgb_led_init(&led, 4, 16, 5);
 mgos_pwm_rgb_led_set(&led, 255, 255, 255, 250); */



  return true;
}
