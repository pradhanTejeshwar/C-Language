#include<stdio.h>
main()
{
	int i,j,k,l,c;
	for(i=1;i<=3;i++)
		{
			for(j=3;j>=i;j--)
				{
					printf("$");
				}
			c=1;
			for(k=1;k<=i;k++)
				{
					printf("%d",c);
					c++;
				}
			c=c-2;
			for(l=1;l=k;l++)
				{
					printf("%d",c);
					c--;
				}			
			printf("\n");
		}
}
