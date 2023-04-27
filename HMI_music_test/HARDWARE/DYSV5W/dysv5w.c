#include "dysv5w.h"
#include "delay.h"
#include "usart.h"
#include "sys.h"


uint8_t stop_code[]={0XAA,0X03,0X00,0XAD};//��ָͣ��
uint8_t play_code[]={0XAA,0X02,0X00,0XAC};//����ָ��
uint8_t up_code[]={0XAA,0X05,0X00,0XAF};//��һ��
uint8_t down_code[]={0XAA,0X06,0X00,0XB0};//��һ��
uint8_t volume_up[]={0XAA,0X14,0X00,0XBE};//������
uint8_t volume_down[]={0XAA,0X15,0X00,0XBF};//������



uint8_t code_study[]={0xAA, 0x08, 0x0B, 0x02, 0x2F, 0x30, 0x30, 0x30, 0x30, 0x31, 0x2A, 0x4D, 0x50, 0x33, 0xD9};
uint8_t code_steady[]={0xAA, 0x08, 0x0B, 0x02, 0x2F, 0x30, 0x30, 0x30, 0x30, 0x32, 0x2A, 0x4D, 0x50, 0x33, 0xDA};

//��ͣ
//���ڽ��� 2
int stop()
{
	int i=0;
	for(i=0;i<4;i++)
		{
				printf("%c",stop_code[i]);
		}

}
//������
//���ڽ��� 1
int volume_change_up(void)
{
	int i=0;
	for(i=0;i<4;i++)
		{
				printf("%c",volume_up[i]);
		}

}
//������
//���ڽ��� 3
int volume_change_down(void)
{
	int i=0;
	for(i=0;i<4;i++)
		{
				printf("%c",volume_down[i]);
		}

}
//��һ��
//���ڽ��� 4
int music_change_up(void)
{
	int i=0;
	for(i=0;i<4;i++)
		{
				printf("%c",up_code[i]);
		}

}

//��һ��
//���ڽ��� 6
int music_change_down(void)
{
	int i=0;
	for(i=0;i<4;i++)
		{
				printf("%c",down_code[i]);
		}

}

//���� ���κ�ʱ���ʹ�ָ����ͷ���ŵ�ǰ��Ŀ
//���ڽ��� 5
int play_music(void)
{
	int i=0;
	for(i=0;i<4;i++)
		{
				printf("%c",play_code[i]);
		}

}


//int change_music(void)
//{

//	int i=0;
//	for(i=0;i<15;i++)
//		{
//				printf("%c",code_study[i]);
//		}

//}

 




