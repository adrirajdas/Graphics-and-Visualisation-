#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
int main()
{
	int a=0, b=0;
	float s, x1=0, x2=0, y1=0, y2=0, i, c;
	printf("enter the first point between which you want to plot the lines");
	scanf(" %f %f",&x1,&y1);
	printf("enter the second point between which you want to plot the lines");
	scanf(" %f %f",&x2,&y2);
	initgraph(&a, &b, "");
	s=(y2-y1)/(x2-x1);
	c=y1-s*x1;
	if(fabs(m)<=1)
	{
		for(i=x1; i<=x2; i++)
		{
			int y=s*i+c;
			putpixel((int)i, (int)y, RED);
		}
	}
	else
	{
		for(i=y1; i<y2; i++)
		{
			int x=(i-c)/s;
			putpixel((int)x, (int)i, RED);
		}
	}
	getch();
	return 0;
}

