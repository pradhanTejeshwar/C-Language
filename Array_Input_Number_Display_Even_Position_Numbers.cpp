#include<stdio.h>
main()
{
	int a[10],i;
	printf("Enter 10 Numbers !\n");
	for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Even Position numbers are : ");
	for(i=0;i<10;i++)
		{
			if(i%2==0)
			printf("%d ",a[i]);
		}
}
