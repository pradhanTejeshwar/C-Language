#include<stdio.h>
void fib();
void main()
{
	fib();
}
void fib()
{
	int i,a=0,b=1,c=0,n;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : 0 1 ");
	for(i=0;i<n-2;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
}
