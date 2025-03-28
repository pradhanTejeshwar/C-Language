3#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n,p;
 float x[25],q,u,a,sum,h,y[25][25];

 clrscr();

 printf("Enter Value of n : ");
 scanf("%d",&n);
 printf("\nEnter Values of X : ");
   for(i=0;i<n;i++)
	scanf("%f",&x[i]);
 printf("\nEnter Values of Y : ");
   for(i=0;i<n;i++)
	scanf("%f",&y[i][0]);
 printf("\nEnter the value of X to find it's Y : ");
 scanf("%f",&a);

 for(j=1;j<n;j++)
    for(i=1;i<n;i++)
       y[i][j] = y[i][j-1]  -  y[u-1][j-1];

 h=x[1]-x[0];
 u=(a-x[n-1])/h;
 sum=y[n-1][0];
 p=q=1;

 for(j=1;j<n;j++)
  {
   p=p*j;
   q=q*(u+1-j);
   sum=sum+q*y[n-1][j]/p;
  }

  printf("\nNewtons Backward Interpolation Formula, we get f(%f) : %f",a,sum);
  getch();
}