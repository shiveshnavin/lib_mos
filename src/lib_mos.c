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
 
struct my_config { int a; char *b; } c = { .a = 0, .b = NULL };
struct user_config { int count; struct rgbw led; } ;
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
			//if(w==0)
			//	w=g;
			//printf ("\n%f %f %f %f",r,g,b,w );  

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

         
			rgbwf=czero;
			 
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
	int loaded=-1;
	bool is_loading=false;
	/*if(counter++>3)
	{

		mgos_config_apply("{\"is_loading\":1}", true);
		printf("Now setting is_loading=1");
	}

	char *content = json_fread("is_loading.json");
	LOG(LL_INFO, ("%s", content));
	json_scanf(content, strlen(content), "{loading: %d}",  &loaded  );
	LOG(LL_INFO, ("%d", loaded));
	free(content);
	LOG(LL_INFO, ("%s", "lib_mos:  isLoading  "));
	LOG(LL_INFO, ("%d",loaded));*/


	char *content = json_fread("loading.json");
	json_scanf(content, strlen(content), "{a: %d, b: %Q}", &c.a, &c.b);
	LOG(LL_INFO, ("%d", c.a));  
	if(c.a==111)
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
		timer_no=-1;
  	    LOG(LL_INFO, ("%s", "lib_mos:Init Completed"));  
	}
	
	 
	return success;
}
int MAX_STEP=200;
static void init_timer_blink_rgb(void *arg) {
  

	if(!is_firmware_loaded()&&counter++<60){
			
			if(curColor==RED)
			{
 
					struct rgbw rgbwi,rgbwf;
					rgbwf=czero;
					rgbwi=rgbwf;
					rgbwf.g=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=GREEN;



			}
			else if(curColor==GREEN)
			{


					struct rgbw rgbwi,rgbwf;
					rgbwf=czero;
					rgbwi=rgbwf;
					rgbwf.b=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=BLUE;
			 
			}
			else if(curColor==BLUE){



						struct rgbw rgbwi,rgbwf;
					rgbwf=czero;
					rgbwi=rgbwf;
					rgbwf.r=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=RED;
			 
			}
			else{

					struct rgbw rgbwi,rgbwf;
					rgbwf=czero;
					rgbwi=rgbwf;
					rgbwf.r=250;
					animate(rgbwi,rgbwf);
					animate(rgbwf,rgbwi);
			curColor=RED;
			 
			}


		}
		else {

				lib_mos_init_done(true);	
				struct rgbw white=czero;
				white.w=250;
				animate(czero,white);

		}

  LOG(LL_INFO, ("%s", "Changing color"));  


}
static void init_timer_blink_yellow(void *arg) {
   

	if(!is_firmware_loaded()){
			
			 
					struct rgbw rgbwi,rgbwf;
					rgbwf=czero;
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
	timer_no=mgos_set_timer(1000, MGOS_TIMER_REPEAT, init_timer_blink_rgb, NULL);
}
void blinkw()
{
	//blink yellow
	timer_no=mgos_set_timer(1000, MGOS_TIMER_REPEAT, init_timer_blink_yellow, NULL);
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
	mgos_config_apply("{\"is_loading\":0}", true);

		/*fp=fopen("is_loading.bin", "w");
		fwrite("still loading" , 1 , sizeof("still loading") , fp );
		fclose(fp);
	
		fp=fopen("is_loading.bin", "r");
		fread(buf, 1, sizeof(buf), fp);
		fclose(fp);
		LOG(LL_INFO, ("%s", buf));  
	*/


json_fprintf("loading.json", "{ a: %d, b: %Q }", 123, "turn to 111 once loaded");
json_prettify_file("loading.json"); 





	if(mgos_sys_config_get_wifi_sta_enable() || mgos_sys_config_get_wifi_sta1_enable() || mgos_sys_config_get_wifi_sta2_enable())
	{	
		LOG(LL_INFO, ("%s", "lib_mos:wifi sta is enabled"));
		if(mgos_sys_config_get_wifi_sta_ssid()!=NULL || mgos_sys_config_get_wifi_sta1_ssid()!=NULL || mgos_sys_config_get_wifi_sta2_ssid()!=NULL )
			{ 
				int count;
				struct rgbw led=czero;
				LOG(LL_INFO, ("%s", "lib_mos:wifi ssid is "));
				LOG(LL_INFO, ("%s", mgos_sys_config_get_wifi_sta_ssid()));
/*
				struct rgbw white=czero;
				white.w=250;
				animate(czero,white);*/  
				int r,g,b,w;
				char *content = json_fread("userData.json");
				LOG(LL_INFO, ("%s", content));
				json_scanf(content, strlen(content), "{count: %d, led_r: %d , led_g: %d , led_b:%d }", &count,  &r,&g,&b  );
				struct rgbw rgbww=led; 
				rgbww.r=r;
				rgbww.g=g;
				rgbww.b=b;
				free(content);
				animate(czero,rgbww);
			}
			else{
				LOG(LL_INFO, ("%s", "lib_mos:wifi ssid is null"));
				blinkw();
			}
	}	else{
				LOG(LL_INFO, ("%s", "lib_mos:wifi is disabled"));
				blinkw();
			}
	 
	
	
	return true;
}
