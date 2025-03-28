#include<stdio.h>
main()
{
	int i,j,k=0;
	for(i=1;i<=4;i++)
		{
			for(j=4;j>=i;j--)
			{printf(" ");
				printf("%d",k);
				k=k+2;
			printf(" ");
			}
		printf("\n");
		}
}
