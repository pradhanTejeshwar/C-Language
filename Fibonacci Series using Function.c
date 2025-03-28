#include<stdio.h>
main()
{
	int a=0,b=1,c=0,n,i;
	printf("Enter the No.");
	scanf("%d",&n);
	printf("%d %d",a,b);
	c=fib(n);
		for(i=1;i<=n;i++)
		{
			printf("%d",c);
		}
}
	int fib(int m)
		{
			int i,c;
			for(i=1;i<=m;i++)
				{
					c=a+b;
					printf("%d",c);
					a=b;
					b=c;
				}
		}
