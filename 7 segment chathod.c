//chathod - give ground to common pin and 1 = hight, 0=low
#include <reg52.h>
void delay();
void main()
{
	while(1)
	{
P1=0x06;//1
delay();
P1=0x5B;//2
delay();
P1=0x4F;//3
delay();
P1=0x66;//4
delay();
P1=0x6D;//5
delay();
P1=0x7D;//6
delay();
P1=0x07;//7
delay();
P1=0x7F;//8
delay();
P1=0x6F;//9
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