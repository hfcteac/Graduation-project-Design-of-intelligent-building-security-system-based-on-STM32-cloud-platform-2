#ifndef _SECURITY_H_
#define _SECURITY_H_ 

//欢迎来到我的世界，抄袭者我操你妈的
#include "dht11.h"
#include <stdio.h>
#include <oled.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

#define u8 unsigned char 
#define u16 unsigned short
#define u32 unsigned int


/*
串口1：A9=TXD,A10=RXD;巴法云点灯科技
串口2：A2=TXD,A3=RXD;太阳能系统收发
串口3：B10=TXD,B11=RXD;企业微信等
户外dht11：A6;
室内dht11：A5;
oled显示：B6=SCL,B7=SDA;
//下面是关于安防检测，控制，传感器接口
区域x显示：火警,烟雾,喷水
走廊1区域：C9  ,D14 ,D0
走廊2区域：C8  ,D13 ,D1
走廊3区域：C7  ,D12 ,D2
办公1区域：C6  ,D11 ,D3
办公2区域：D15 ,D10 ,D4
//下面是关于灯光的检测，控制接口
走廊1区域：D9 ,PE2
走廊2区域：D8 ,PE3
办公1区域：B15,PE5
办公2区域：B14,PE6（没有e6实际连接e4）//还有电平是反的
灭火水泵：PB3 PB4   (PD5,PD6坏了）
水泵调速：PE9(MASTER),PE11(SLAVE)
报警警报：PD7
空调制冷压缩机（制冷片功率太大了）：PC12
空调风扇：PC11,PC10(SLAVE)
*/
#define stcurity
//
#endif
