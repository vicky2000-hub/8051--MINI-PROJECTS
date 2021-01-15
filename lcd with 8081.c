#include <reg52.h>
sbit rs =P2^0;
sbit rw =P2^1;
sbit e  =P2^2;
void lcd_send_data(char dat);
void lcd_send_cmd(char cmd);
void lcd_print();
void delay();
void main()
{
	lcd_send_cmd(0x01);
	lcd_send_cmd(0x0c);
	lcd_print();
}
void lcd_send_cmd(char cmd)
{
	P1=cmd;
	rs=0;
	rw=0;
	e=1;
	delay();
	e=0;
}
void lcd_send_data(char dat)
{
	P1=dat;
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
void lcd_print()
{
	lcd_send_data('h');
	lcd_send_cmd(0x06);
	lcd_send_data('e');
	lcd_send_cmd(0x06);
	lcd_send_data('l');
	lcd_send_cmd(0x06);
	lcd_send_data('l');
	lcd_send_cmd(0x06);
	lcd_send_data('o');
	lcd_send_cmd(0x06);
	lcd_send_data('w');
	lcd_send_cmd(0x06);
}