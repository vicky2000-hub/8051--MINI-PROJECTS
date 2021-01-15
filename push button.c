#include <reg52.h>
sbit vicky = P1^0;// int i =0;
sbit servesh = P1^1;
#define servesh2 p1
void main()
{
	
	vicky =1;
	if(vicky==0)
	{
		servesh =0;
	}
	else
	{
	 servesh =1;
	}
}
