#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{
 int gd=DETECT,gm;
 int i,x,y;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

 while(!kbhit())
  {
   for(i=0;i<=500;i++)
    {
     x=rand()%getmaxx();
     y=rand()%getmaxy();
     putpixel(x,y,WHITE);
    }
  }
   delay(500);
   cleardevice();
   getch();
   closegraph();
   return 0;
}