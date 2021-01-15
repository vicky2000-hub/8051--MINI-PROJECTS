//anode - give 5v power supply to common pin and 0= hight,1=low
#include <reg52.h>
void delay();
void main()
{
	while(1)
	{
P1=0xF9;
delay();
P1=0xA4;
delay();
P1=0xB0;
delay();
P1=0x99;
delay();
P1=0x92;
delay();
P1=0x82;
delay();
P1=0xF8;
delay();
P1=0xFF;
delay();
P1=0x80;
delay();
P1=0x90;
delay();
}
}
void delay()
{
unsigned int i,j;
for(i=0;i<500;i++)
{
for(j=0;j<500;j++)
{}}
}