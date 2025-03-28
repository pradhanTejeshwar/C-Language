#include<stdio.h>
main()
{
	int i,j,k,l,m;
	for(i=1;i<=3;i++)
		{
			for(l=1;l<i;l++)
				printf(" ");
			for(j=i;j<=3;j++)
				printf("%d",j);
			m=2;
			for(k=3;k>i;k--)
				{
					printf("%d",m);
					m--;
				}
			printf("\n");
		}
}
