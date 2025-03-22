#include<stdio.h>
main()
{
	int i,j,k,l;
		for(i=5;i>=1;i--)
			{
				for(j=1;j<=i-1;j++)
					{
						printf("  ");
					}
				l=1;
				for(k=5;k>=i;k--)
					{
						printf("%d ",l);
						l++;
					}
				printf("\n");
			}
}
