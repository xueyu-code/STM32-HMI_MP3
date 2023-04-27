#ifndef __HMI_H	
#define __HMI_H	 
#include "sys.h"
#include "delay.h"

//默认驱动此模块使用串口3

void HMISendstart(void);
void HMISends(char *buf1);
void HMISendb(u8 k);

#endif


