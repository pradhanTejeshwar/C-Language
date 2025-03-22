#include<stdio.h>
main()
{
	int i,j;
		for(i=1;i<=3;i++)
			{
				for(j=1;j<=i;j++)
					
					{
						if((i+j)%2==0)
							printf("0 ");
							else
								printf("1 ");
					}
				printf("\n");
			 } 
}
