#ifndef __TMR2_H
#define __TMR2_H

#include "gpio.h"					   //we use f_cpu

//for calling programs
//extern void (*_tmr2_isr_ptr)(void);				//isr handler
//extern unsigned char tmr2_offset;				//tmr2 offset

//tmr1 prescaler
#define TMR2_PS_1x			0x00				//tmr2 post scaler
#define TMR2_PS_2x			0x10
#define TMR2_PS_3x			0x20
#define TMR2_PS_4x			0x30
#define TMR2_PS_5x			0x40
#define TMR2_PS_6x			0x50
#define TMR2_PS_7x			0x60
#define TMR2_PS_8x			0x70
#define TMR2_PS_9x			0x80
#define TMR2_PS_10x			0x90
#define TMR2_PS_11x			0xa0
#define TMR2_PS_12x			0xb0
#define TMR2_PS_13x			0xc0
#define TMR2_PS_14x			0xd0
#define TMR2_PS_15x			0xe0
#define TMR2_PS_16x			0xf0

//timing constant
#define TMR_ms				(F_CPU / 1000)		//ms definition
#define TMR_1ms				(TMR_ms * 1)		//1ms definition
#define TMR_2ms				(TMR_ms * 2)		//2ms definition
#define TMR_5ms				(TMR_ms * 5)		//5ms definition
#define TMR_10ms			(TMR_ms * 10)		//10ms definition
#define TMR_20ms			(TMR_ms * 20)		//20ms definition
#define TMR_50ms			(TMR_ms * 50)		//50ms definition

#define TMR2_MLT_1x			0x00				//tmr2 multiplier = prescaler
#define TMR2_MLT_4x			0x01
#define TMR2_MLT_16x		0x02
#define TMR2_MLT_64x		0x03

//initialize the timer
void tmr2_init(unsigned char prescaler, unsigned char period);

//activate the isr handler
void tmr2_act(void (*isr_ptr)(void));

#endif
