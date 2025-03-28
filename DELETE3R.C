#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.0001
float fun(float k)
{
  float val=pow(k,2)+log(k)-12;
  return val;
}
void rf(float a,float b)
{
  float L=fun(a),R=fun(b),n;
  int c,i;
  if(L*R>0)
   {
     printf("Root does not lie in the given interval : ");
     return;
   }
  else
   {
     printf("Enter no. of iteration : ");
     scanf("%d",&i);
     for(c=0;c<i;c++)
       {
	 do{
	  n=((b*L)-(R*a))/(L-R);
	  printf("\nAt %d iteration, root is %f and function : %f",c,n,fun(n));
	  if((fun(n)*fun(a))<0)
	    {
	      b=n;
	      R=fun(n);
	    }
	  else
	    {
	      a=n;
	      L=fun(n);
	    }
	 }while(fabs(fun(n))<=E);
       }
   printf("\nRequired Result : %f",n);
   }
}
void main()
{
  float l,u;
  clrscr();
  printf("\nEnter lower limit : ");
  scanf("%f",&l);
  printf("\nEnter Upper Limit : ");
  scanf("%f",&u);
  rf(l,u);
  getch();
}