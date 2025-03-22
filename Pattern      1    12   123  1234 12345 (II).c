#include<stdio.h>
main()
{
	int i,j,k,p=4;
		for(i=1;i<=5;i++)
			{
				for(j=1;j<=p;j++)
					{
						printf("  ");
					}
				for(k=1;k<=i;k++)
					{
						printf("%d ",k);
					}
				printf("\n");
				p--;
			}
}
