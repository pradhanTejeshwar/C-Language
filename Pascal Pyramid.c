#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,l,m,n;
	printf("\n How many lines to Print ? ");
	scanf("%d",&n);
		for(l=1;l<=n;l++)
			{
				for(i=1;i<=n-l;i++)
					printf(" ");
				m=1;
				for(j=1;j<=l;j++)
					{
						printf("%6d",m);
						m++;
					}
				m=m-2;
				for(k=1;k<l;k++)
				{
					printf("%6d",m);
					m--;
				}
			printf("\n");
			}
	getch();
}
