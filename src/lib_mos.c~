#include "mgos.h"
#include "mgos_pwm.h"
#include "math.h"
#include <stdio.h>

struct rgbw{
	double r,g,b,w;
};
  int count=0;
  struct rgbw czero;

  int RED=1,GREEN=2,BLUE=3;
  int curColor=-1;
  int timer_no=-1;
  int counter=0;
  int FREQ=1000;
  int STEP=100;
  int DELAY=2500; 
 


#define DEG_TO_RAD(X) (M_PI*(X)/180)
void hsi2rgbw(float H, float S, float I, int* rgbw) {
  int r, g, b, w;
  float cos_h, cos_1047_h;
  H = fmod(H,360); // cycle H around to 0-360 degrees
  H = 3.14159*H/(float)180; // Convert to radians.
  S = S>0?(S<1?S:1):0; // clamp S and I to interval [0,1]
  I = I>0?(I<1?I:1):0;
  
  if(H < 2.09439) {
    cos_h = cos(H);
    cos_1047_h = cos(1.047196667-H);
    r = S*255*I/3*(1+cos_h/cos_1047_h);
    g = S*255*I/3*(1+(1-cos_h/cos_1047_h));
    b = 0;
    w = 255*(1-S)*I;
  } else if(H < 4.188787) {
    H = H - 2.09439;
    cos_h = cos(H);
    cos_1047_h = cos(1.047196667-H);
    g = S*255*I/3*(1+cos_h/cos_1047_h);
    b = S*255*I/3*(1+(1-cos_h/cos_1047_h));
    r = 0;
    w = 255*(1-S)*I;
  } else {
    H = H - 4.188787;
    cos_h = cos(H);
    cos_1047_h = cos(1.047196667-H);
    b = S*255*I/3*(1+cos_h/cos_1047_h);
    r = S*255*I/3*(1+(1-cos_h/cos_1047_h));
    g = 0;
    w = 255*(1-S)*I;
  }
  
				//LOG(LL_INFO, ("%s %d %d %d %d", "HSV TO RGB IS ",rgbw[0],rgbw[1],rgbw[2],rgbw[3])); 
  rgbw[0]=r;
  rgbw[1]=g;
  rgbw[2]=b;
  rgbw[3]=w;

}


int convertHSI2RGB_R(float h, float s, float v)
{
				int rgbw1[]={0,0,0,0};
				hsi2rgbw(h,s,v,rgbw1); 
				struct rgbw rgbww;
				rgbww.r=rgbw1[0];
				rgbww.g=rgbw1[1];
				rgbww.b=rgbw1[2];
				rgbww.w=rgbw1[3]; 

		 return rgbww.r;

}


int convertHSI2RGB_G(float h, float s, float v)
{
				int rgbw1[]={0,0,0,0};
				hsi2rgbw(h,s,v,rgbw1); 
				struct rgbw rgbww;
				rgbww.r=rgbw1[0];
				rgbww.g=rgbw1[1];
				rgbww.b=rgbw1[2];
				rgbww.w=rgbw1[3]; 

		 return rgbww.g;

}



int convertHSI2RGB_B(float h, float s, float v)
{
				int rgbw1[]={0,0,0,0};
				hsi2rgbw(h,s,v,rgbw1); 
				struct rgbw rgbww;
				rgbww.r=rgbw1[0];
				rgbww.g=rgbw1[1];
				rgbww.b=rgbw1[2];
				rgbww.w=rgbw1[3]; 

		 return rgbww.b;

}


int convertHSI2RGB_W(float h, float s, float v)
{
				int rgbw1[]={0,0,0,0};
				hsi2rgbw(h,s,v,rgbw1); 
				struct rgbw rgbww;
				rgbww.r=rgbw1[0];
				rgbww.g=rgbw1[1];
				rgbww.b=rgbw1[2];
				rgbww.w=rgbw1[3]; 

		 return rgbww.w;

}


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
			if(r>1)
				r=1;
			if(g>1)
				g=1;
			if(b>1)
				b=1;
			if(w>1)
				w=1;
			//if(w==0)
			//	w=g;
			

				LOG(LL_INFO, ("%s %f %f %f %f", "RGBW IS ",color.r,color.g,color.b,color.w)); 

			mgos_pwm_set(4,FREQ,r);
			mgos_pwm_set(15,FREQ,g);
			mgos_pwm_set(16,FREQ,g);
			mgos_pwm_set(5,FREQ,b);
			mgos_pwm_set(19,FREQ,w);

}  

			void setPrevColor(){

				float h,s,v;
				int def;
				char *content = json_fread("userData.json");
				LOG(LL_INFO, ("%s", content));
				json_scanf(content, strlen(content), "{count: %d,def: %d, hsv_h:%f, hsv_s:%f, hsv_v:%f}", &count,&def,  &h,&s,&v );

				if(def==0)
				{
					LOG(LL_INFO, ("flag was 0 , Lib is setting color to RED")); 
					struct rgbw rgbww;
					rgbww.r=255.0;
					rgbww.g=0.0;
					rgbww.b=0.0;
					rgbww.w=0.0; 
					setrgbw(rgbww);
					return;

				}
				 
				LOG(LL_INFO, ("%s %f %f %f", "HSV IS ",h,s,v)); 

				int rgbw1[]={0,0,0,0};
				free(content);  


				hsi2rgbw(h,s,v,rgbw1); 
				struct rgbw rgbww;
				rgbww.r=rgbw1[0];
				rgbww.g=rgbw1[1];
				rgbww.b=rgbw1[2];
				rgbww.w=rgbw1[3]; 
				setrgbw(rgbww);



			}






bool mgos_lib_mos_init(void) {
	
	LOG(LL_INFO, ("%s", "Hello From Library Log"));  
	mgos_gpio_set_mode(4, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(15, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(16, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(5, MGOS_GPIO_MODE_OUTPUT);
	mgos_gpio_set_mode(19, MGOS_GPIO_MODE_OUTPUT);


			//mgos_pwm_set(4,200,0.1);
			//mgos_pwm_set(16,200,0.1);
			//mgos_pwm_set(5,200,0.1);
			//mgos_pwm_set(19,200,0.1);
 
 
		setPrevColor();
	





	return true;
}
