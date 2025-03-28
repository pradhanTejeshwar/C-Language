#include<stdio.h>
main()
{
	int a=0,b=1,c=0,i;
	printf("0 1 ");
	for(i=2;i<10;i++)
		{
			c=a+b;
			a=b;
			b=c;
			printf("%d ",c);
		}
}
