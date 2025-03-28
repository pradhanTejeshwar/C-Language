#include<stdio.h>
main()
{
	int i,a=0,b=1,c=0,n;
	printf("Enter the nth value : ");
	scanf("%d",&n);
	printf("0 1 ");
	for(i=2;i<n;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
	getch();
}
