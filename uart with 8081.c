#include <reg52.h>//receiver and transmit
void main()
{
	unsigned char a;
	SCON=0x50;
	TMOD=0x20;
	TH1=TL1=0xfd;
	TR1=1;
	while(1)
	{
		while(RI==0);//1-----I
		RI=1;
		a=SBUF;
		SBUF=a;
		while(TI==0);
		TI=0;
	}
}
