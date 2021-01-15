#include <reg52.h>

void delay()
{
	unsigned int i,j;
	for (i=0;i<=1000;i++)
{
		
	}
}
void main()
{
	while(1)
	{
		P1=0xFF;
		delay();
		P1=0x00;
		delay();
	}
}
