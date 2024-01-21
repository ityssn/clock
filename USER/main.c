#include "stm32f4xx.h"
#include "usart.h"
#include "sys.h"
#include "tim.h"

	
int main(void)
{
	TIM3_Init(8400,10000);
	OLED_I2C_Init();
	OLED_Init();
	extern int s;
	int m=0;
	int h=0;
	while(1)
	{
		   if(s==60){m++;s=0;}
			 if(m==60){h++;m=0;}		
			OLED_ShowNum(1,1,h,2);
	    OLED_ShowNum(1,4,m,2);
		  OLED_ShowNum(1,7,s,2);
		}
		
	}


