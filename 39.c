#include<stdio.h>
main()
{
	int i,j,k,b=0,l;
		for(i=3;i>=1;i--)
			{
				for(k=1;k<=b;k++)
					{
						printf("  ");
					}
				for(j=i;j>=1;j--)
					{
						printf("%d ",j);
					}
						if(i>1)
							{
								for(l=2;l<=i;l++)
									{
										printf("%d ",l);
									}
							}
				b++;
				printf("\n");
			}
}
