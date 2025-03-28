
#include<stdio.h>
main()
{
	int i,j,c=1;
		for(i=1;i<=5;i++)
			{
				for(j=1;j<=i;j++)
					{
						if(i%2 != 0)
							{
								printf("%d",c);
								c++;
							}
						else
						{
							printf("*");
						}
					}
			printf("\n");
			}
}
