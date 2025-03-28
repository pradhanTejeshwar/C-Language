#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.0001

void rf(float,float);
float fun(float);

void main()
{
  float l,u;
  clrscr();

  printf("Enter lower Limit : ");
  scanf("%f",&l);
  printf("\nEnter upper Limit : ");
  scanf("%f",&u);
  rf(l,u);
  getch();
}
void rf(float a,float b)
{
  float L=fun(a),R=fun(b),x;
  int c,i;
  if(L*R>0)
   {
     printf("\nRoot does not lie in the given interval");
     return;
   }
  else
   {
     printf("\nEnter total no. of iterations : ");
     scanf("%d",&i);

     for(c=0;c<i;c++)
      {
	do
	 {
	   x=((b*L)-(a*R))/(L-R);
	   printf("\nAt %d iteration, root is %f and function is : %f",c,x,fun(x));

	   if((fun(x)*fun(a))<0)
	    {
	      b=x;
	      R=fun(x);
	    }
	   else
	    {
	      a=x;
	      L=fun(x);
	    }
	 }
       while(fabs(fun(x))<=E);
      }
   printf("\n\n\nThe root is %f correct upto 6(six) significant figures",x);
   }
}
float fun(float k)
{
  float val=pow(k,2)+log(k)-12;
  return val;
}