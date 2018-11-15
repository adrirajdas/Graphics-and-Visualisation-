#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<STDLIB.h>

	void draw(int x1,int y1,int x2,int y2)
	{
	       int xm=(x1+x2)/2;
	       int ym=(y1+y2)/2;
	       int r=random(16);
	       //printf("\n%d",r);
	       //getch();
		if(!(xm==x1&&ym==y1))
		{
			putpixel(xm,ym,r);
			delay(50);
			draw(x1,y1,xm,ym);
			draw(xm,ym,x2,y2);
		}
	}

int main()
{
	int a=0,b=0;
	float s, X1=0, X2=0, Y1=0, Y2=0;
	printf("enter the first point between which you want to plot the lines");
	scanf(" %f %f",&X1,&Y1);
	printf("enter the second point between which you want to plot the lines");
	scanf(" %f %f",&X2,&Y2);
	initgraph(&a, &b, "");
	draw(X1,Y1,X2,Y2);
	getch();
	return 0;
}

