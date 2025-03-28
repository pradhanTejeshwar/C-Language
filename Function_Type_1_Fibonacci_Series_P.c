#include<stdio.h>
int fib(int x);
int main()
{
	int n,i;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	i=fib(n);
	printf("\nFibonacci Series : 0 1 ");
	printf("%d ",i);
	getch();
}
int fib(int x)
{
	int i,a=1,b=1,c=0;
	for(i=1;i<=a;i++)
		{
			c=a+b;
			a=b;
			b=c;
			return c;
		}
}
