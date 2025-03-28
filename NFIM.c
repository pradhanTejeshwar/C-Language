#include<stdio.h>
#include<conio.h>
void main()
{
 float x[6],y[6],n,d[10][10],u,s=0,t,z,h;
 float i,j;

 clrscr();

 printf("Enter values of X : ");
 for(i=0;i<6;i++)
	scanf("%f",&x[i]);

 printf("\nEnter values of Y : ");
 for(i=0;i<6;i++)
	scanf("%f",&y[i]);

 printf("\nEnter No. of Points : ");
 scanf("%f",&n);
 printf("\nEnter Required Points of X : ");
 scanf("%f",&z);

 h=x[1]-x[0];
 u=(z-x[0])/h;

 for(i=0;i<n;i++)
    for(j=0;j<n;j++)
       d[i][j]=0.0;

 for(i=0;i<n;i++)
    d[i][0]=y[i+1]-y[i];
 for(j=1;j<n-1;j++)
    for(i=0;i<n-j-i;i++)
       d[i][j] = d[i+1][j-1]  -  d[i][j-1];

 s=y[0];
 t=1.0;
 for(i=0;i<n;i++)
   {
    t=t*((u-i)/(i+1));
    s=s+t*d[0][i];
   }

 printf("\nRequired Solution : %f",s);
 getch();

}