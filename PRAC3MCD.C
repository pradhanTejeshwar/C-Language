#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void Midpoint(int,int,int);
void CirclePlotPoint(int,int,int,int);

void main()
{
 int gd=DETECT,gm;
 int xc,yc,r;
 printf("\nEnter the origin Co-Ordinate : ");
 scanf("%d%d",&xc,&yc);
 printf("\nEnter the radius : ");
 scanf("%d",&r);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 Midpoint(xc,yc,r);
 while(!getch())
  closegraph();
 getch();
}
void Midpoint(int xc,int yc,int r)
{
 int x=0,y=r;
 int p=1-r;
 while(x<=y)
  {
   CirclePlotPoint(xc,yc,x,y);
   if(p<0)
    p=p+2*(x)+3;
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
 putpixel(xc+y,yc+x,8);
 putpixel(xc-x,yc+y,9);
 putpixel(xc-y,yc+x,10);
 putpixel(xc+x,yc-y,11);
 putpixel(xc-y,yc-x,12);
 putpixel(xc-x,yc-y,13);
 putpixel(xc+y,yc-x,14);
}