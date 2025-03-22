#include<stdio.h>
int fibonacci();
int main()
{
	int z,n,i;
	printf("Enter the Limit of the Fibonacci Series : ");
	scanf("%d",&n);
	printf("0 1 ");
	z=fibonacci(n);
	for(i=1;i<=n;i++)
		{
			printf("%d ",z);
		}
}
int fibonacci(x)
	{
		int j,a=0,b=1,c=1;
		for(j=1;j<=x;j++)
			{
				c=a+b;
				a=b;
				b=c;
				return c;
			}
	}
