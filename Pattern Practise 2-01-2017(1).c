#include<stdio.h>
main()
{
	int i,j,k,l,m;
	for(i=3;i>=1;i--)
		{
			for(l=3;l>i;l--)
				printf(" ");
			for(j=i;j<=1;j--)
				{
					printf("%d",j);
				}
			m=2;
			for(k=1;k<i;k++)
				{
					printf("%d",m);
					m++;
				}
		}
}
