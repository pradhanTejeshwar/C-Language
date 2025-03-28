#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void LineDDA(int , int , int , int);
void main()
{
 int gd=DETECT, gm;
 int x1,x2,y1,y2;

 printf("\nEnter the 1st Co-ordinate : ");
 scanf("%d%d",&x1,&y1);
 printf("\nEnter the 2nd Co-ordinate : ");
 scanf("%d%d",&x2,y2);

 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 LineDDA(x1,y1,x2,y2);

 getch();
 closegraph();

}
void LineDDA(int x , int y , int x2 , int y2)
{
 float m;
 int i,dx,dy;
 m=((x2-x)/(y2-y));
 for(i=x;i<=x2;i++)
  {
   if(m<=1)
    {
     dx=1;
     dy=m*dx;
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