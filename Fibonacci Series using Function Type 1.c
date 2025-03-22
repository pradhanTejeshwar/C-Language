#include<stdio.h>
int fib(int);
void main()
{
	int i,n,z;
	printf("Enter the Number : ");
	scanf("%d \n",&n);
	printf("0 1 ");
	z=fib(n);
	for(i=1;i<=n;i++)
		{
			printf("%d ",z);
		}
}
	int fib(int x)
		{
			int j,a=0,b=1,c=0;
			for(j=1;j<=x;j++)
				{
					c=a+b;
					a=b;
					b=c;
					return c;
				}
		}
