#include<graphics.h>
#include<dos.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int a=0,b;
	int x1,y1,x2,y2,x,y;
	printf("enter the first point between which you want to plot the lines");
	scanf(" %d %d",&x1,&y1);
	printf("enter the second point between which you want to plot the lines");
	scanf(" %d %d",&x2,&y2);
	initgraph(&a,&b,"");
	int dx=x2-x1, dy=y2 - y1, dt=2*(dy - dx), ds=2*dy;
	int d=2*dy - dx;
	x=x1;
	y=y1;
	putpixel(x,y,RED);
	while(x<x2)
	{
		x++;
		if(d<0)
		{
			d=d+ds;
		}
		else
		{
			y++;
			d=d+dt;
		}
		putpixel(x,y,RED);
	}
getch();
return 0;
}
