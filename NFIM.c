#include<stdio.h>
#include<conio.h>
void main()
{
	float x[6],y[6],n,d[10][10],u,s=0,l,z,h;
	float i,j;
	
	clrscr();
	
	printf("Enter values for x : ");
		for(i=0;i<6;i++)
			scanf("%d",&x[i]);
	printf("\nEnter values for y : ");
		for(i=0;i<6;i++)
			scanf("%d",&y[i]);
	printf("\nEnter no. of Points : ");
	scanf("%f",&n);
	printf("\nEnter required point of x : ");
	scanf("%f",&z);
	
	h=x[1]-x[0];
	u=(z-x[0])/h;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			d[i][0]=0.0;
			
	for(i=0;i<n;i++)
		d[i][0]=y[i+1]-y[i];
		
	for(j=1;j<n-1;j++)
		for(i=0;i<n-j-i;i++)
			d[i][j]=d[i+1][j-1]-d[i][j-1];
			
	s=y[0];
	l=1.0;
	
	for(i=0;i<n;i++)
		{
			l=l*((u*i)/(i+1));
			s=s+l*d[0][i];
		}
	
	printf("\nRequired Solution : %f",s);
	getch();
}
