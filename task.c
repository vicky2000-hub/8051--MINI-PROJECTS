#include <reg52.h>
sbit rs =P2^0;
sbit rw =P2^1;
sbit e  =P2^2;
sbit button = P0^0;
void lcd_send_data(char dat);
void lcd_send_cmd(char cmd);
void show(unsigned char *s);
void delay();
void main()
{
	unsigned char a;
	SCON =0x50;
	TMOD=0x20;
	TH1=TL1=0xfd;
	TR1=1;
	
	  while(RI==0);//1-----I
		RI=1;
		a=SBUF;
		show(a);
	lcd_send_cmd(0x01);
	lcd_send_cmd(0x0c);
	
}
void lcd_send_cmd(char cmd)
{
	P3=cmd;
	rs=0;
	rw=0;
	e=1;
	delay();
	e=0;
}
void lcd_send_data(char dat)
{
	P3=dat;
	rs=1;
	rw=0;
	e=1;
	delay();
	e=0;
}
void delay()
{ int unsigned i,j;
	for(i=0;i<=100;i++)
	{
		for(j=0;j<=100;j++)
		{}
		}
	}
void show(unsigned char *s)
{
	while(*s)
	{
		lcd_send_data(*s++);
		
	}
}