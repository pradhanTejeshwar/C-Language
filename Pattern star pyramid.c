#include <stdio.h>
#include <conio.h>
main()
{
	int i,j,k,c=4;
	for (i=5; i>=1; i--) 
	{
		for (j=1; j<=c; j++) 
			{
				printf(" ");
			}
				for (k=i; k<=5; k++) 
					{
						printf("%d", i);
					}
		printf("\n");
		c--;
	}
}
