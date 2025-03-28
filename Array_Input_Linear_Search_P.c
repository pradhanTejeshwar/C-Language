#include<stdio.h>
main()
{
	int a[5],i,n;
	printf("Enter 5 Numbers : ");
	for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\nEnter the number to be Searched : ");
	scanf("%d",&n);
	for(i=0;i<5;i++)
		{
			if(n==a[i])
				printf("%d is found in position %d.",n,i+1);
		}
}
