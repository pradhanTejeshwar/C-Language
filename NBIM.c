#include<stdio.h>
#include<conio.h>
void main()
{
	float x[25],q,u,a,sum,h,y[25][25];
	int i,j,n,p;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	printf("\nEnter the values of x : ");
		for(i=0;i<n;i++)
			scanf("%f",&x[i]);
	printf("\nEnter the values of y : ");
		for(i=0;i<n;i++)
			scanf("%f",&y[i][0]);
			
	printf("\nEnter the value of x whose y is to be found : ");
	scanf("%f",&a);
	
	for(j=1;j<n;j++)
		for(i=1;i<n;i++)
			y[i][j]=y[i][j-1]-y[i-1][j-1];
			
	h=x[1]-x[0];
	u=(a-x[n-1])/h;
	sum=y[n-1][0];
	p=q=1;
	
	for(j=1;j<n;j++)
		{
			p=p*j;
			q=q*(u+1-j);
			sum=sum + q*y[n-1][j]/p;
		}
		
	printf("\nUsing Newton's Backward Interpolation Formula f(%f) is %f",a,sum);
	getch();
}
