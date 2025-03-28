#include<stdio.h>
main()
{
	int a[5],i;
	printf("Enter 5 Numbers ! \n");
	for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Entered Number is \n");
	for(i=4;i>=0;i--)
		{
			printf("%d ",a[i]);
		}
}
