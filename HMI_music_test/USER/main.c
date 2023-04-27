#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "usart3.h"
#include "string.h" 
#include "hmi.h"

//定义一些基本变量

int main(void)
{		
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
 	delay_init();	    	 //延时函数初始化	  
	uart_init(9600);	
	usart3_init(9600);
	while(1){	
	

	}	
 }
