#include <reg52.h>
void delay();
void main()
{
	P0=0x00;
	while(1)
	{
		P0=0xFF;
		delay();
		P0=0x00;
		delay();
	}
}

void delay()
{
	int i;
	for(i=0;i<=200;i++)
	{
		TMOD=0x03;//clock
		TC
			}
}
