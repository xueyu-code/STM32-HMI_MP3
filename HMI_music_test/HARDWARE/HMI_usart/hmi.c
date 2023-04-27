#include "hmi.h"
//默认驱动此模块使用串口3

//串口波特率是9600，确保串口HMI正常通信
void HMISendstart(void)
	{
	 	delay_ms(200);
		HMISendb(0xff);
		delay_ms(200);
	}

//字符串发送函数
void HMISends(char *buf1)		  
{
	u8 i=0;
	while(1)
	{
		if(buf1[i] != 0)
	 	{
			USART_SendData(USART3,buf1[i]);  //发送一个字节
			while(USART_GetFlagStatus(USART3,USART_FLAG_TXE)==RESET){};//等待发送结束
		 	i++;
		}
		else
		{
			return ;
		}
	}
}

//字节发送函数
void HMISendb(u8 k)		         
{		 
	u8 i;
	 for(i=0; i<3; i++)
	 {
			if(k != 0)
			{
				USART_SendData(USART3,k);  //发送一个字节
				while(USART_GetFlagStatus(USART3,USART_FLAG_TXE)==RESET){};//等待发送结束
			}
			else
			{
				return ;
			}
	 } 
} 

