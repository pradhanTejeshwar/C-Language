#include<stdio.h>
int fib(int x);
int main()
{
	int z;
	printf("0 1 ");
		if(z>=10)
			z=fib(10-1);
		else
			fib(10);

}
	int fib(int x)
	{
		int i,a=0,b=1,c=0;
		for(i=0;i<=x-2;i++)
			{
				c=a+b;
				a=b;
				b=c;
				printf("%d ",c);
			}
	}
