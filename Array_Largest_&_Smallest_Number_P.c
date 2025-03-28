#include<stdio.h>
main()
{
	int a[10],i,L,S;
	printf("Enter 10 No.'s : ");
	for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
	L=a[0];
	for(i=1;i<10;i++)
	{
		if(L<a[i])
			L=a[i];
	}
	printf("\nLargest Number is : %d",L);
	S=a[0];
	for(i=1;i<10;i++)
	{
		if(S>a[i])
			S=a[i];
	}
	printf("\nSmallest Number is : %d",S);
}
