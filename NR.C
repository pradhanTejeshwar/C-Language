#include<stdio.h>
#include<conio.h>
#include<math.h>

void nr(float,int);
float fun(float);
float dfun(float);

void main()
{
  float i1,i2;
  int it;
  clrscr();
  printf("Enter Starting Point : ");
  scanf("%f",&i1);
  printf("\nEnter Ending Point : ");
  scanf("%f",&i2);
  printf("\nEnter total no. of iterations : ");
  scanf("%d",&it);
  if(fabs(fun(i1))<fabs(fun(i2)))
    nr(i1,it);
  else
    nr(i2,it);

  getch();
}
void nr(float x,int i)
{
  float nrt;
  int c;
  printf("\nThe considered initial value is %f",x);

  for(c=1;c<=i;c++)
    {
      nrt=x-(fun(x)/dfun(x));
      printf("\nAt %d interation root is %f and function is : %f",c,nrt,fun(nrt));
      x=nrt;
    }
  printf("\nThe Required root is %f",nrt);
}
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