#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void lineDDA(int,int,int,int);
void main()
 {
  int x1,y1,x2,y2;
  int gd=DETECT,gm;

  printf("Enter the Starting Coordinate : ");
  scanf("%d%d",&x1,&y1);
  printf("\nEnter the Ending Coordinate : ");
  scanf("%d%d",&x2,&y2);

  initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  lineDDA(x1,y1,x2,y2);
  getch();
  closegraph();
 }
  void lineDDA(int x1 , int y1 , int x2 , int y2)
   {
    float m;
    int i,dx,dy;
    m=((y2-y1)/(x2-x1));

    for(i=x1;i<=x2;i++)
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
     }
    x1=x1+dx;
    y1=y1+dy;
    putpixel(x1,y1,1);
   }