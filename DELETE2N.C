#include<stdio.h>
#include<conio.h>
#include<math.h>

float fun(float k)
{
  float val=(4*sin(k))-exp(k);
  return val;
}
float dfun(float k)
{
  float val=(4*cos(k))-exp(k);
  return val;
}
void nr(float x,int i)
{
  float nrt;
  int c;
  printf("Initial value : %f",x);

  for(c=0;c<i;c++)
    {
      nrt=x-((fun(x))/dfun(x));
      printf("\nAt %d iteration, root is %f and function : %f",c,nrt,fun(nrt));
      x=nrt;
    }
  printf("\nRequired Result : %f",nrt);
}
void main()
{
  float i1,i2;
  int it;
  clrscr();
  printf("Enter Starting Point : " );
  scanf("%f",&i1);
  printf("\nEnter Ending Point : ");
  scanf("%f",&i2);
  printf("\nEnter no of Iteration : ");
  scanf("%d",&it);
  if(fabs(fun(i1))<fabs(fun(i2)))
    nr(i1,it);
  else
    nr(i2,it);
  getch();
}