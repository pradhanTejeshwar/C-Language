#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void LineDDA(int,int,int,int);
void main()
{
 int x1,y1,x2,y2;
 int gd=DETECT,gm;
 printf("\nEnter 1st Co-Ordinate : ");
 scanf("%d%d",&x1,&y1);
 printf("\nEnter 2nd Co-Ordinate : ");
 scanf("%d%d",&x2,&y2);
 initgraph(&gd,&gm,"C;\\TURBOC3\\BGI");
 LineDDA(x1,y1,x2,y2);
  getch();
 closegraph();
}
void LineDDA(int x,int y,int x2,int y2)
{
 int i,dx,dy;
 float m;
 m=((x2-x)/(y2-y));
 for(i=x;i<=x2;i++)
  {
   if(m<=1)
    {
     dx=1;
     dy=dx*m;
    }
   else
    {
     dy=1;
     dx=dy/m;
    }
   x=x+dx;
   y=y+dy;
   putpixel(x,y,RED);
  }
}