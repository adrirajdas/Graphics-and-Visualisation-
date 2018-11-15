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
	int x,y;
	float z;
	//printf("enter the center of the circle");
	//scanf("%d%d",&x,&y);
	printf("enter the radius of the circle");
	scanf("%d",&r);
	t.x=r;
	t.y=r;
	initgraph(&a, &b, "");
	o.x=getmaxx()/2;
	o.y=getmaxy()/2;
	setcolor(WHITE);
	line(o.x,0,o.x,o.y*2);
	line(0,o.y,o.x*2,o.y);
	x=(r/sqrt(2))+0.5;
	for(;x>=0;x--)
	{
	t.x=x;
	z=sqrt(r*r-x*x);
	t.y=(int)(z+0.5);
	circle_print(t);
	}
	getch();
	return 0;
}

