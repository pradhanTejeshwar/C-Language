#include<stdio.h>
int fib(int x);
int main()
{
	int n,z;
	printf("Enter the limit : ");
	scanf("%d",&n);
	printf("0 1 ");
		if(z>=n)
			z=fib(n-1);
		else
			fib(n);

}
	int fib(int x)
	{
		int i,a=0,n,b=1,c=0;
		for(i=0;i<=x-2;i++)
			{
				c=a+b;
				a=b;
				b=c;
				printf("%d ",c);
			}
}
