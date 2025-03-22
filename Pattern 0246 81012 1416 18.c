#include<stdio.h>
main()
{
	int i,j,k=0;
		for(i=4;i>=1;i--)
			{
				for(j=1;j<=i;j++)
					{
						printf("%d ",k);
						k=k+2;
					}
				printf("\n");
			}
}
