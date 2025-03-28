#include<stdio.h>
main()
{
	int n,i,a=0,b=1,c=0;
	printf("Enter the Limit : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : 0 1 ");
	for(i=1;i<=n-2;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
}
