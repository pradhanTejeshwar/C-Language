#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) ((x*x*x)-(8*x)-4)

void main()
{
 float c,f=0,i;
 float a,b,x;
 clrscr();

 for(i=1;f!=2;i++)
  {
    if(f(i)<0)
     {
      a=i;
      f=1;
     }
    if(f==1)
     {
      if(f(i)>0)
       {
	b=i;
	f=2;
       }
     }
  }
  printf("Root lies between %f and %f",a,b);

  do
  {
   x=(a+b)/2;
   if(f(x)*f(a)<0)
    b=x;
   else
    a=x;
   printf("\na : %f , b : %f",a,b);
  }while(fabs(f(x))>0.000001);
  printf("\nResult : %f",x);
  getch();
}
