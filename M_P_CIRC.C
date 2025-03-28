#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void show_screen();
void midpoint_circle(int , int , int);
int main()
{
 int driver=VGA;
 int mode=VGAHI;
 int h=0;
 int k=0;
 int r=0;

 do
  {
   showscreen();
   gotoxy(8,10);
   printf("\nCentral Point of the Circle : (h,k) : ");

   gotoxy(8,11);
   printf("\nIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII");

   gotoxy(12,13);
   printf("\nEnter the value of h : ");

   gotoxy(12,14);
   printf("\nEnter the value of k : ");

   gotoxy(8,18);
   printf("\nRadius of the Circle");

   gotoxy(8,19);
   printf("\nIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII");

   gotoxy(12,21);
   printf("\nEnter the value of r : ");

   initgraph(&driver,&mode,"C:\\TURBOC3\\BGI");

   setcolor(15);
    midpoint_circle(h,k,r);

   setcolor(15);
    outtextxy(110,460,"Press <Enter> to continue or any other key to exit.");

   int key=int(getch());

   if(key!=13)
   break;
  }while(1);

 return 0;
}

{
 int color=getcolor();
 int x=0;
 int y=r;
 int p=(1-r);

 do
  {
   putpixel((h+x),(k+y),color);
   putpixel((h+y),(k+x),color);
   putpixel((h+y),(k-x),color);
   putpixel((h+x),(k-y),color);
   putpixel((h-x),(k-y),color);
   putpixel((h-y),(k-x),color);
   putpixel((h-y),(k+x),color);
   putpixel((h-x),(k+y),color);

   x++;

   if(p<0)
    p+=((2*x)+1);
   else
    {
     y--;
     p+=((2*(x-y))+1);
    }
  }while(x<=y);
}

{
 restorecrtmode();
 textmode(C4350);
 cprintf("\nIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII");
 crpintf("\n-------------------------------------");

 textbackground(1);
  cprintf(Midpoint Circle Algorithm ");

 cprintf("\n-------------------------------------");
 cprintf("\nIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII");

 for(int count=0;count<42;count++)
  cprintf("*-*");

 goto(1,46);
  cprintf("\n-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_");

 goto(1,2);
}