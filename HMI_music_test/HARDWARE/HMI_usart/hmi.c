#include "hmi.h"
//Ĭ��������ģ��ʹ�ô���3

//���ڲ�������9600��ȷ������HMI����ͨ��
void HMISendstart(void)
	{
	 	delay_ms(200);
		HMISendb(0xff);
		delay_ms(200);
	}

//�ַ������ͺ���
void HMISends(char *buf1)		  
{
	u8 i=0;
	while(1)
	{
		if(buf1[i] != 0)
	 	{
			USART_SendData(USART3,buf1[i]);  //����һ���ֽ�
			while(USART_GetFlagStatus(USART3,USART_FLAG_TXE)==RESET){};//�ȴ����ͽ���
		 	i++;
		}
		else
		{
			return ;
		}
	}
}

//�ֽڷ��ͺ���
void HMISendb(u8 k)		         
{		 
	u8 i;
	 for(i=0; i<3; i++)
	 {
			if(k != 0)
			{
				USART_SendData(USART3,k);  //����һ���ֽ�
				while(USART_GetFlagStatus(USART3,USART_FLAG_TXE)==RESET){};//�ȴ����ͽ���
			}
			else
			{
				return ;
			}
	 } 
} 

