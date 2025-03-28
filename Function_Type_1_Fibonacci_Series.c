#include<stdio.h>
int fib(int);
main()
{
	int n,z;
	printf("Enter a limit for Fibonacci Series to occur !");
	scanf("%d",&n);
	while(n>0)
		{
			z=fib(n);
			printf("%d ",z);
			getch();
		}
}
int fib(int t)
{
	int a=0,b=1,c=0,i;
	for(i=1;i<=t;i++)
		{
			return c;
			c=a+b;
			a=b;
			b=c;
		}
}
