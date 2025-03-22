#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void CirclePlotPoint(int,int,int,int);
void MidPoint(int,int,int);

void main()
{
 int gd=DETECT,gb;
 int xc=320,yc=240,r=150;
 initgraph(&gd,&gb,"C:\\TURBOC3\\BGI");
 MidPoint(xc,yc,r);
 while(!getch());
  closegraph();
}
void MidPoint(int xc,int yc,int r)
{
 int x=0,y=r;
 int p=1-r;
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
 putpixel(xc+x,yc+y,5);
 putpixel(xc+y,yc+x,1);
 putpixel(xc-x,yc+y,3);
 putpixel(xc-y,yc+x,2);
 putpixel(xc+x,yc-y,14);
 putpixel(xc-y,yc-x,13);
 putpixel(xc-x,yc-y,4);
 putpixel(xc+y,yc-x,15);

}