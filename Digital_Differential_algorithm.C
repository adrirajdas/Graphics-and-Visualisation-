#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<STDLIB.h>

int main()
{
	int a=0,b=0;
	float s, X1=0, X2=0, Y1=0, Y2=0,y,x;
	printf("enter the first point between which you want to plot the lines");
	scanf(" %f %f",&X1,&Y1);
	printf("enter the second point between which you want to plot the lines");
	scanf(" %f %f",&X2,&Y2);
	s=(Y2-Y1)/(X2-X1);
	initgraph(&a, &b, "");
	if(fabs(s)<1)
	{
		y=Y1;
		for(x=X1;x<=X2;x++)
		{
			y=y+s;
			delay(100);
			putpixel(x,y,random(16));
		}
	}
	else
	{
		x=X1;
		for(y=Y1;y<Y2;y++)
		{
			delay(100);
			putpixel(x,y,random(16));
			x=x+(1/s);
		}
	}
	getch();
	return 0;
}

