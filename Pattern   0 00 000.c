#include<stdio.h>
main()
{
	int i,j,k;
	for(i=3;i>=1;i--)
	{
		for(j=1;j< i;j++)
			{
				printf("0 ");
			}
	 	for(k=3;k>=i;k--)
			{
				printf("* ");
			}
		printf("\n");
	}
}
