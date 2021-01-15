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
		TMOD=0x01;//clock
		TH0=0x00;
		TL0=0x00;
		TR0=1;
		while(TF0==0);
		TF0=0;
	}
}
