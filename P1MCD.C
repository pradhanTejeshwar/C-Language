
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void Midpoint(int,int,int);
void CirclePlotPoint(int,int,int,int);
void main()
{
 int gd=DETECT,gm;
 int xc,yc,r;
 printf("Enter the Co-ordinate : ");
 scanf("%d%d",&xc,&yc);
 printf("\nEnter the Radius : ");
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
 int p=3-2*r;
 while(x<=y)
  {
   CirclePlotPoint(xc,yc,x,y);
   if(p<0)
    p=p+2*x+3;
   else
    {
     p=p+2*(x-y)+3;
     y--;
    }
   x++;
  }
}
void CirclePlotPoint(int xc,int yc,int x,int y)
{
 putpixel(xc+x,yc+y,10);
 putpixel(xc+y,yc+x,1);
 putpixel(xc-x,yc+y,2);
 putpixel(xc-y,yc+x,3);
 putpixel(xc+x,yc-y,4);
 putpixel(xc-y,yc-x,5);
 putpixel(xc-x,yc-y,6);
 putpixel(xc+y,yc-x,7);
}