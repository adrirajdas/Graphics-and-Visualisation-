#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<STDLIB.h>
struct pt
{
int x,y;
}t,t1;
int r;
struct pt o;

void circle_print(struct pt t1)
{
	putpixel(o.x+t1.x,o.y-t1.y,RED);
	putpixel(o.x+t1.x,o.y-t1.y*(-1),RED);
	putpixel(o.x+t1.x*(-1),o.y-t1.y*(-1),RED);
	putpixel(o.x+t1.x*(-1),o.y-t1.y,RED);

	putpixel(o.x+t1.y,o.y-t1.x,RED);
	putpixel(o.x+t1.y*(-1),o.y-t1.x,RED);
	putpixel(o.x+t1.y*(-1),o.y-t1.x*(-1),RED);
	putpixel(o.x+t1.y,o.y-t1.x*(-1),RED);

}

int main()
{
	int a=0,b=0;
	int x,y,d;
	float z;
	//printf("enter the center of the circle");
	//scanf("%d%d",&x,&y);
	printf("enter the radius of the circle");
	scanf("%d",&r);
	x=0,y=r;
	d=3-2*r;
	t.x=0;
	t.y=r;
	d=3-2*r;
	initgraph(&a, &b, "");
	o.x=getmaxx()/2;
	o.y=getmaxy()/2;
	setcolor(WHITE);
	line(o.x,0,o.x,o.y*2);
	line(0,o.y,o.x*2,o.y);
	while(x<=y)
	{
		circle_print(t);
		if(d<0)
			d=d+2*x+3;
		else
		{
			d=d+2*(x-y)+5;
			y--;
		}
		x++;
		t.x=x;
		t.y=y;
	}
	getch();
	return 0;
}

