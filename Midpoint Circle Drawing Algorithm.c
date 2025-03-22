#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void midpoint(int,int,int);
void CirclePlotPoint(int,int,int,int);
void main()
{
	int gd=DETECT,gm;
	int xc=320,yc=240,r=150;
	initgraph(&gd,&gm,"c:\tc\turboc3\bgi");
	midpoint(xc,yc,r);
	while((!khbit));
	closegraph();
	getch();
}
void midpoint(int xc,int yc,int r)
{
	int x=0,y=r;
	int p=1-r;								//decision Parameter
	while(x<=y)
		{
			CirclePlotPoint(xc,yc,x,y);
			if(p<0)
				p=p+2*x+3;
			else
				{
					p=p+2*(x-y)+5;
					y--;
				}
			x++;
		}
}
void CirclePlotPoint(int xc,int yc,int x,int y)
	{
		putpixel(xc+x,yc+y,7);
		putpixel(xc+x,yc+y,8);
		putpixel(xc+x,yc+y,9);
		putpixel(xc+x,yc+y,10);
		putpixel(xc+x,yc+y,11);
		putpixel(xc+x,yc+y,12);
		putpixel(xc+x,yc+y,13);
		putpixel(xc+x,yc+y,14);
	}
