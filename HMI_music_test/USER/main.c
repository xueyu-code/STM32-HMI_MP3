#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "usart3.h"
#include "string.h" 
#include "hmi.h"

//����һЩ��������

int main(void)
{		
  NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
 	delay_init();	    	 //��ʱ������ʼ��	  
	uart_init(9600);	
	usart3_init(9600);
	while(1){	
	

	}	
 }
