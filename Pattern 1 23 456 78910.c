#include<stdio.h>
main ()
{
	int c,i,j,k=0;
		for(i=1;i<=4;i++)
			{
				c=0;
				for(j=1;j<=i;j++)
					{
						printf("%d",++k);
					}
				printf("\n");
			}
}
