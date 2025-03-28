#include<stdio.h>
main()
{
	int a[5],i,c;
	printf("Enter 5 Numbers !\n");
	for(i=0;i<5;i++)
		{
			scanf("%d",&a[i]);
		}
	c=0;
	for(i=0;i<5;i++)
		{
				if(a[i]%2!=0)
					c++;
		}
	printf("\nFrequency of ODD Number is %d",c);
}
