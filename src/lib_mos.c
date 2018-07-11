#include "mgos.h"
#include "mgos_pwm.h"
#include <stdio.h>

struct rgbw{
	double r,g,b,w;
};
  int count=0;
  struct rgbw color,pcolor;
  struct rgbw cred,cgreen,cblue,czero;

  int RED=1,GREEN=2,BLUE=3;
  int curColor=-1;
  int timer_no=-1;
  int counter=0;
  int FREQ=200;
  int STEP=100;
  int DELAY=2500; 
 
struct my_config { int a; char *b; } c = { .a = 0, .b = NULL };
struct user_config { int count; struct rgbw led; } ;
  void setrgbw(struct rgbw color){

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
			

			mgos_pwm_set(4,FREQ,r);
			mgos_pwm_set(16,FREQ,g);
			mgos_pwm_set(5,FREQ,b);
			mgos_pwm_set(19,FREQ,w);

} 
void animate(struct rgbw rgb0, struct rgbw rgb1)
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

void setPrevColor(){
				int r,g,b,w;
				char *content = json_fread("userData.json");
				LOG(LL_INFO, ("%s", content));
				json_scanf(content, strlen(content), "{count: %d, led_r: %d , led_g: %d , led_b:%d }", &count,  &r,&g,&b  );
				struct rgbw rgbww=czero; 
				rgbww.r=r;
				rgbww.g=g;
				rgbww.b=b;
				free(content);
				animate(czero,rgbww);
}

bool mgos_lib_mos_init(void) {
	
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
		printf("lib_mos : Hello World !!");
		pcolor=color;

		cred=color;
		cred.r=250;

		cgreen=color;
		cgreen.g=250;

		cblue=color;
		cblue.b=250; 

		json_fprintf("loading.json", "{ a: %d, b: %Q }", 123, "turn to 111 once loaded");
		json_prettify_file("loading.json"); 

		setPrevColor();
	

	return true;
}
