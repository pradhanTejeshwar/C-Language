#include<stdio.h>
main()
{
	int a[5],i,n,mid,lb,ub,flag=0;
	printf("Enter 5 Numbers : ");
	for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\nEnter the Number to be Searched : ");
	scanf("%d",&n);
	lb=a[0];
	ub=a[4];
	while(lb<=ub)
		{
			mid=(lb+ub)/2;
				if(n==a[mid])
					{
						flag=1;
						break;
					}
				if(n<a[mid])
					{
						ub=mid-1;
					}
				if(n>a[mid])
					{
						lb=mid+1;
					}
		}
	if(flag==1)
		{
			printf("%d is found at position %d.",n,mid+1);
		}
	else
		{
			printf("%d was not found.",n);
		}
}
