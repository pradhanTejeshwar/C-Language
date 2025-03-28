#include<stdio.h>
main()
{
	int n,r=1;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n>0)
		{
			r=n%10;
			n=n/10;
			printf("%d ",r);
		}
}
