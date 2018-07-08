#include "mgos.h"
#include "mgos_pwm.h"
#include <stdio.h>

struct rgbw{
	double r,g,b,w;
};
static int count=0;
static struct rgbw color,pcolor;
static struct rgbw cred,cgreen,cblue,czero;

static int RED=1,GREEN=2,BLUE=3;
static int curColor=-1;
static int timer_no=-1;
static int counter=0;
static int STEP=100;
static int DELAY=2500; 
 
static void setrgbw(struct rgbw color){

			double r,g,b,w;
			r=color.r/255.0;
			g=color.g/255.0;
			b=color.b/255.0;
			w=color.w/255.0; 
			if(r<0)
				r=0;
			if(g<0)
				g=0;
			if(b<0)
				b=0;
			if(w<0)
				w=0;
			if(r>255)
				r=255;
			if(g>255)
				g=255;
			if(b>255)
				b=255;
			if(w>255)
				w=255;
			w=g;
			printf ("\n%f %f %f %f",r,g,b,w );  

			mgos_pwm_set(4,200,r);
			mgos_pwm_set(16,200,g);
			mgos_pwm_set(5,200,b);
			mgos_pwm_set(19,200,w);

}
static void animate(struct rgbw rgb0, struct rgbw rgb1)
{
            int i=0;
            struct rgbw rgbwf;
			int step=STEP;
 
 	       int dr=rgb1.r-rgb0.r;
           int dg=rgb1.g-rgb0.g;
           int db=rgb1.b-rgb0.b;
           int dw=rgb1.w-rgb0.w; 
        
       //printf ("\n%f %f %f %f",dr,dg,db,dw );  

         
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
              
			  // printf("%d %f",rgbwf.r,((dr * i) / step));
			   setrgbw(rgbwf);
               mgos_usleep(DELAY);
               
            };
       
}
static bool is_firmware_loaded()
{
	/*if(counter++>3)
	{

		mgos_config_apply("{\"is_loading\":1}", true);
		printf("Now setting is_loading=1");
	}*/

	bool is_loading=false;
	int loaded=  mgos_sys_config_get_is_loading();

	if(loaded==1)
	{
		is_loading=true;
	}
	
	  
	return is_loading;
}

static bool lib_mos_init_done(bool initdone)
{

	bool success=false;
		
	if(timer_no!=-1&&initdone)
	{
		mgos_clear_timer(timer_no);
  	    LOG(LL_INFO, ("%s", "lib_mos:Init Completed"));  
	}
	
	if(!initdone)
	{
		mgos_config_apply("{\"is_loading\":0}", true);
	}
	return success;
}
int MAX_STEP=200;
static void init_timer_cb(void *arg) {
  

	if(!is_firmware_loaded()){
			
			if(curColor==RED)
			{
 
					struct rgbw rgbwi,rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;
					rgbwi=rgbwf;
					rgbwf.g=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=GREEN;



			}
			else if(curColor==GREEN)
			{


					struct rgbw rgbwi,rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;
					rgbwi=rgbwf;
					rgbwf.b=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=BLUE;
			 
			}
			else if(curColor==BLUE){



						struct rgbw rgbwi,rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;
					rgbwi=rgbwf;
					rgbwf.r=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=RED;
			 
			}
			else{

					struct rgbw rgbwi,rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;
					rgbwi=rgbwf;
					rgbwf.r=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=RED;
			 
			}


		}
		else {

				lib_mos_init_done(true);

		}

  LOG(LL_INFO, ("%s", "Changing color"));  


}
static void init_timer_cb_2(void *arg) {
   

	if(!is_firmware_loaded()){
			
			 
					struct rgbw rgbwi,rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;
					rgbwi=rgbwf;
					rgbwf.r=250;
					rgbwf.g=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			 
 
		}
		else {

				lib_mos_init_done(true);

		}

  LOG(LL_INFO, ("%s", "Changing color"));  


}
void blinkb()
{
	//blink rgb
	timer_no=mgos_set_timer(1000, MGOS_TIMER_REPEAT, init_timer_cb, NULL);
}
void blinkw()
{
	//blink yellow
	timer_no=mgos_set_timer(1000, MGOS_TIMER_REPEAT, init_timer_cb_2, NULL);
} 
bool mgos_lib_mos_init(void) {
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
	lib_mos_init_done(false);

		/*fp=fopen("is_loading.bin", "w");
		fwrite("still loading" , 1 , sizeof("still loading") , fp );
		fclose(fp);
	
		fp=fopen("is_loading.bin", "r");
		fread(buf, 1, sizeof(buf), fp);
		fclose(fp);
		LOG(LL_INFO, ("%s", buf));  
	*/

	if(mgos_sys_config_get_wifi_sta_enable())
	{	
		if(mgos_sys_config_get_wifi_sta_ssid()!=NULL)
			{
				struct rgbw white=czero;
				white.w=250;
				animate(czero,white);
			}
			else{
				blinkw();
			}
	}
	else if(mgos_sys_config_get_bt_enable())
	{
		blinkw();
	}
	
	
	return true;
}

