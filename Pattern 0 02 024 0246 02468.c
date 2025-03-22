#include<stdio.h>
main()
{
	int i,j,k;
		for(i=0;i<=4;i++)
			{ k=0;
				for(j=0;j<=i;j++)
					{
						printf("%d ",k);
						k=k+2;
					}
				printf("\n");	
			}
}
