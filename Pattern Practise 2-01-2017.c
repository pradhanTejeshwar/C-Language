#include<stdio.h>
main()
{
	int i,j,k,l,m=1,n=2;
	for(i=1;i<=3;i++)
		{
			//for(l=2;l>=i;l--)
			//	printf(" ");
			for(j=1;j<=i;j++)
				{
					printf("%d",m);
					m--;
				}
			for(k=1;k<i;k++)
				{
					printf("%d",n);
					n++;
				}
			m++;
			printf("\n");
		}
}
