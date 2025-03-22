#include<stdio.h>
main()
{
	int i,j,k,l,m,n,o,p;
	for(j=1;j<=9;j++)
		{
			printf(" #");
		}
	printf("\n");
	for(i=5;i>=1;i--)
		{
			for(j=1;j<=i;j++)
				{
					printf(" *");
				}
			for(k=5;k>=i;k--)
				{
					printf("  ");
				}
			for(l=5;l>=i;l--)
				{
					printf("  ");
				}
			for(m=1;m<=i;m++)
				{
					printf(" *");
				}
			printf("\n");
		}
	for(j=1;j<=i;j++)
		{
			
		}
}
