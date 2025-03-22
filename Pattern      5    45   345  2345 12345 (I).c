#include<stdio.h>
main ()
{
	int i,j,k,l=5;
		for(i=4;i>=1;i--)
			{
				for(j=1;j<=i;j++)
					{
						printf("  ");
					}
				for(k=l;k<=5;k++)
					{
						printf("%d ",k);
					}
				l--;
				printf("\n");
			}
}
