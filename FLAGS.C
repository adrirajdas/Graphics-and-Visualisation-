#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

int main()
{
	int a=0,b=0,i=0,j=0;
	int x=100,y=100,valx=30;
	initgraph(&a,&b,"");
	for(j=0;j<170;j++)
	{
		y=100;
		for(i=0;i<valx;i++)
		putpixel(x,y++,6);
		for(i=0;i<valx;i++)
		putpixel(x,y++,15);
		for(i=0;i<valx;i++)
		putpixel(x,y++,2);
		x++;
	}
	x=90,y=100;
	for(j=0;j<250;j++)
	{
	       x=90;
	       for(i=0;i<10;i++)
	       putpixel(x++,y,8);
	       y++;
	}
	getch();
	return 0;
}