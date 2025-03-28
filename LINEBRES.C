#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void LineBres(int , int , int , int);
void main()
{
 int xa,ya,xb,yb;
 int gd=DETECT,gm;
 printf("\n\nEnter the co-ordinate of first point : ");
 scanf("%d%d",&xa,&ya);
 printf("\n\nEnter the co-ordinate of second point : ");
 scanf("%d%d",&xb,&yb);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 LineBres(xa,ya,xb,yb);
 getch();
 closegraph();
}
void LineBres(int xa,int ya,int xb,int yb)
{
 int dx,dy,x,y,xEnd,P;
 dx=abs(xb-xa);
 dy=abs(yb-ya);
 P=2*(dy)-(dx);
 if (xa>xb)
  {
   x=xb;
   y=yb;
   xEnd=xa;
  }
 else
  {
   x=xa;
   y=ya;
   xEnd=xb;
  }

 do{
     x=x+1;
     if(P<0)
      P=P+2*(dy);
    else
    {
     y=y+1;
     P=P+2*(dy-dx);
    }
   putpixel(x,y,RED);
  }while(x<xEnd);

 getch();
}