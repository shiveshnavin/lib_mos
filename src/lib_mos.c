#include "mgos.h"
#include "mgos_pwm.h"
#include <stdio.h>

struct rgbw{
	int r,g,b,w;
};

static struct rgbw color,pcolor;
static struct rgbw cred,cgreen,cblue,czero;

static int RED=1,GREEN=2,BLUE=3;
static int curColor=-1;
static int timer_no=-1;
 
static void setrgbw(struct rgbw color){

 double r,g,b,w;
 r=color.r/255;
 g=color.g/255;
 b=color.b/255;
 w=color.w/255; 
 //printf ("%f %f %f %f",r,g,b,w );  

  mgos_pwm_set(4,200,color.r/255);
  mgos_pwm_set(16,200,color.r/255);
  mgos_pwm_set(5,200,color.b/255);
  mgos_pwm_set(19,200,color.w/255);

}
static void animate(struct rgbw rgb1, struct rgbw rgb0)
{
 
 	       int dr=rgb1.r-rgb0.r;
           int dg=rgb1.g-rgb0.g;
           int db=rgb1.b-rgb0.b;
           int dw=rgb1.w-rgb0.w; 
       
       printf ("%f %f %f %f",dr,dg,db,dw );  

          if(dr!=0 || dg!=0 || db !=0 || dw!=0  )
          {
            int i=0;
            struct rgbw rgbwf;
			int step=10;
			rgbwf.r=0,
			rgbwf.g=0;
			rgbwf.b=0;
			rgbwf.w=0;
			 
            for(i=0;i<=step;i++)
            {
               rgbwf.r=rgb0.r + ((dr * i) / step);
               rgbwf.g=rgb0.g + ((dg * i) / step);
               rgbwf.b=rgb0.b + ((db * i) / step);
               rgbwf.w=rgb0.w + ((dw * i) / step);
              
			   setrgbw(rgbwf);
               mgos_usleep(5);
               
            };
      
          } 
}
static bool is_firmware_loaded()
{

	bool is_loading=false;
	/*FILE *fp;
	char *buf = "xxxxxxxxxxxxxx"; 
	fp=fopen("is_loading.bin", "r");
	fread(buf, 1, sizeof(buf), fp);
	fclose(fp);
	if(buf[0]=='s')
	{
		is_loading=true;
	}
	LOG(LL_INFO, ("%s", buf));  */
	return is_loading;
}

static void init_timer_cb(void *arg) {
  

	if(!is_firmware_loaded()){
			
			if(curColor==RED)
			{

			curColor=GREEN;
			animate(czero,cgreen);
			animate(cgreen,czero);

			}
			else if(curColor==GREEN)
			{

			curColor=BLUE;
			animate(czero,cblue);
			animate(cblue,czero);

			}
			else if(curColor==BLUE){


			curColor=RED;
			animate(czero,cred);
			animate(cred,czero);

			}
			else{

			curColor=RED;
			animate(czero,cred);
			animate(cred,czero);

			}


		}
		else {

				mgos_clear_timer(timer_no);

		}

  LOG(LL_INFO, ("%s", "Changing color"));  


}

static bool lib_mos_init_done(bool initdone)
{

	bool success=false;
		
	if(timer_no!=-1&&initdone)
	{
		mgos_clear_timer(timer_no);
	}
	return success;
}
bool mgos_lib_mos_init(void) {
/*
  FILE *fp;
	char *buf = "xxxxxxxxxxxxxx"; */
  printf("Hello From Library");

  LOG(LL_INFO, ("%s", "Hello From Library Log"));  
  mgos_gpio_set_mode(4, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(16, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(5, MGOS_GPIO_MODE_OUTPUT);
  mgos_gpio_set_mode(19, MGOS_GPIO_MODE_OUTPUT);


color.r=0;
color.g=0;
color.b=0;
color.w=0;
czero=color;

pcolor=color;

cred=color;
cred.r=250;

cgreen=color;
cgreen.g=250;

cblue=color;
cblue.b=250;

	/*fp=fopen("is_loading.bin", "w");
	fwrite("still loading" , 1 , sizeof("still loading") , fp );
	fclose(fp);
 
	fp=fopen("is_loading.bin", "r");
	fread(buf, 1, sizeof(buf), fp);
	fclose(fp);
	LOG(LL_INFO, ("%s", buf));  
  */
  mgos_config_apply("{\"is_loading\":1}", true);
  timer_no=mgos_set_timer(1000, MGOS_TIMER_REPEAT, init_timer_cb, NULL);
 
  lib_mos_init_done(false);
  return true;
}

