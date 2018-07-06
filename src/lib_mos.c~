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
			int step=10;
 
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
               mgos_usleep(5);
               
            };
       
}
static bool is_firmware_loaded()
{

	bool is_loading=false;/*
	int loaded=  mgos_conf_value_int("is_loading");
if(loaded==1)
{
is_loading=true;
}
	FILE *fp;
	char *buf = "xxxxxxxxxxxxxx"; 
	fp=fopen("is_loading.bin", "r");
	fread(buf, 1, sizeof(buf), fp);
	fclose(fp);
	if(buf[0]=='s')
	{
		is_loading=true;
	}
	LOG(LL_INFO, ("%s", buf));  */
	if(count++>3)
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
	return success;
}
int MAX_STEP=200;
static void init_timer_cb(void *arg) {
  

	if(!is_firmware_loaded()){
			
			if(curColor==RED)
			{

					int i=0;
					int n = MAX_STEP;
					struct rgbw rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;

					for (i = 0; i < n; i++)
					{

						rgbwf.g=rgbwf.g+(255.0/n);	
       					//printf ("\nGreen %f %1.3f ",rgbwf.g,(float)(rgbwf.g/255.0) );  			
						setrgbw(rgbwf);
						mgos_usleep(5000);
					}

					for (i = 0; i < n; i++)
					{

						rgbwf.g=rgbwf.g-(255.0/n);	
       					//printf ("\nGreen %f %1.3f ",rgbwf.g,(float)(rgbwf.g/255.0) );  			
						setrgbw(rgbwf);
						mgos_usleep(5000);
					}
			curColor=GREEN;



			}
			else if(curColor==GREEN)
			{


					int i=0;
					int n = MAX_STEP;
					struct rgbw rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;

					for (i = 0; i < n; i++)
					{

						rgbwf.b=rgbwf.b+(255/n);				
						setrgbw(rgbwf);
						mgos_usleep(5);
					}

					for (i = 0; i < n; i++)
					{

						rgbwf.b=rgbwf.b-(255/n);				
						setrgbw(rgbwf);
						mgos_usleep(5);
					}
			curColor=BLUE;
			 
			}
			else if(curColor==BLUE){



					int i=0;
					int n = MAX_STEP;
					struct rgbw rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;

					for (i = 0; i < n; i++)
					{

						rgbwf.r=rgbwf.r+(255/n);				
						setrgbw(rgbwf);
						mgos_usleep(5);
					}

					for (i = 0; i < n; i++)
					{

						rgbwf.r=rgbwf.r-(255/n);				
						setrgbw(rgbwf);
						mgos_usleep(5);
					}
			curColor=RED;
			 
			}
			else{


					int i=0;
					int n = MAX_STEP;
					struct rgbw rgbwf;
					rgbwf.r=0;
					rgbwf.g=0;
					rgbwf.b=0;
					rgbwf.w=0;

					for (i = 0; i < n; i++)
					{

						rgbwf.r=rgbwf.r+(255/n);				
						setrgbw(rgbwf);
						mgos_usleep(5);
					}

					for (i = 0; i < n; i++)
					{

						rgbwf.r=rgbwf.r-(255/n);				
						setrgbw(rgbwf);
						mgos_usleep(5);
					}
			curColor=RED;
			 
			}


		}
		else {

				lib_mos_init_done(true);

		}

  LOG(LL_INFO, ("%s", "Changing color"));  


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

