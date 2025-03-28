#include<stdio.h>
int fib(int);
int main()
{
	int n,z;
	printf("Enter a Number : ");
	scanf("%d",&n);
	printf(" 0 1 ");
	z=fib(n);
	
}
int fib(int x)
{
	int i,a=0,b=1,c=0;
		for(i=3;i<=x;i++)
			{
				printf("%d ",c);
				a=b;
				c=a+b;
				b=c;
			}
}
