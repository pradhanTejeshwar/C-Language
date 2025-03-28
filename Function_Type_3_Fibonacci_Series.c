#include<stdio.h>
void fib(int x);
void main()
{
	int n,i;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : 0 1 ");
	fib(n);
}
void fib(int x)
{
	int i,a=0,b=1,c=0;
	for(i=1;i<=x-2;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
}
