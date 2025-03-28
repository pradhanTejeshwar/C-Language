#include<stdio.h>
main()
{
	int a[10],i,n,c=0;
	printf("Enter 10 Numbers : ");
	for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Enter the Number you are searching for : ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
		{
			if(n==a[i])
				{
					c=1;
					break;
				}
		}
	if(c==1)
		printf("The element is found at %d postion !",i+1);
	else
		printf("The element could not be found in any postion !");
}
