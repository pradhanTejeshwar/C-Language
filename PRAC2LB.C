#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void LineBres(int,int,int,int);
void main()
{
 int gd=DETECT,gm;
 int xa,ya,xb,yb;
 printf("\nEnter 1st Co-Ordinate : ");
 scanf("%d%d",&xa,&ya);
 printf("\nEnter 2nd Co-Ordinate : ");
 scanf("%d%d",&xb,&yb);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 LineBres(xa,ya,xb,yb);
  getch();
 closegraph();
}
void LineBres(int xa,int ya,int xb,int yb)
{
 int x,y,dx,dy,xEnd,P;
 dx=abs(xb-xa);
 dy=abs(yb-ya);
 P=2*dy-dx;
  if(xa>xb)
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
  putpixel(x,y,GREEN);
 do{
  x++;
  if(P<0)
   P=P+2*(dx);
  else
   {
    P=P+2*(dx-dy);
    y--;
   }
  x++;
  putpixel(x,y,GREEN);
 }while(x<xEnd);
}