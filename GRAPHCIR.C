#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void LineBres(int , int , int , int);
void main()
{
 int gd=DETECT, gm;
 int x,y,radius;

 printf("Enter the Radius of the Circle");
 scanf("%d",&radius);

 initgraph(&gd,&gm,"""C:\\TURBOC3\\BGI");
 x=getmaxx()/2;
 y=getmaxy()/2;

 outtextxy(x-100,50,"Circle using Graphics in C");
 circle(x,y,radius);

 getch();
 closegraph();

}