#include<stdio.h>
main()
{
	int i,j,k,l,m;
	for(i=3;i>=1;i--)
		{
			for(k=3;k>i;k--)
				printf(" ");
			for(j=i;j>=1;j--)
				printf("%d",j);
			m=2;
			for(l=1;l<i;l++)
				{
					printf("%d",m);
					m++;
				}
			printf("\n");
		}
}
