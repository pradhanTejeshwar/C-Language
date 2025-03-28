#include<stdio.h>
main()
{
	int a[5],i,s=0;
	printf("Enter 5 No.s : ");
	for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("\nEntered Numbers are : ");
	for(i=0;i<5;i++)
		{
			printf("%d ",a[i]);
			s=s+a[i];
		}
	printf("\nSum is %d : ",s);
}
