#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
struct pt
{
	int x,y;
};
struct pt convert(struct pt q, struct pt w)
{
	struct pt t;
	t.x=q.x+w.x;
	t.y=q.y-w.y;
	return(t);
}
int main()
{
	int a=0,b=0;
	int mx,my;
	initgraph(&a,&b," ");
	mx=getmaxx()/2;
	my=getmaxy()/2;
	line(0,my,mx*2,my);
	line(mx,0,mx,my*2);
	float x,y,r=30;
	struct pt q,w,t;
	q.x=mx;
	q.y=my;
	for(x=r/sqrt(2);x>0;x--)
	{
		y=sqrt(r*r-x*x);
	       w.x=x;w.y=y;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=x;w.y=-y;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=-x;w.y=y;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=-x;w.y=-y;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=y;w.y=x;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=y;w.y=-x;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=-y;w.y=x;t=convert(q,w);putpixel(t.x,t.y,RED);
	       w.x=-y;w.y=-x;t=convert(q,w);putpixel(t.x,t.y,RED);
	       delay(100);
	}
	retuen 0;
	getch();
}
