#include<stdio.h>
main()
{
	int i,j,k,l,m;
	for(i=1;i<=3;i++)
		{
			for(j=3;j>i;j--)
				printf(" ");
			for(k=i;k>=1;k--)
				{
					printf("%d",k);
				}
			m=2;
			for(l=1;l<i;l++)
				{
					printf("%d",m);
					m++;
				}
			printf("\n");
		}
}
