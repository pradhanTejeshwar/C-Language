#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void LineBres(int,int,int,int);
void main()
{
 int gd=DETECT,gm;
 int xa,ya,xb,yb;
 printf("Enter the 1st Co-ordinate : ");
 scanf("%d%d",&xa,&ya);
 printf("\nEnter the 2nd Co-ordinate : ");
 scanf("%d%d",&xb,&yb);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 LineBres(xa,ya,xb,yb);
 getch();
 closegraph();
}
void LineBres(int xa,int ya,int xb,int yb)
{
 int x,y,dx,dy,xEnd,p;
 dx=abs(xb-xa);
 dy=abs(yb-ya);
 p=2*(dy)-(dx);
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

  do{
    x++;
    if(p<0)
     p=p+2*dy;
    else
     {
      p=p+2*(dy-dx);
      y++;
     }
    putpixel(x,y,11);
  }while(x<xEnd);
}