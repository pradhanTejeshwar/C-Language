//Output
//12345
//1234
//123
//12
//1
#include<stdio.h>
main()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
		{
			k=1;
			for(j=5;j>=i;j--)
				{
					printf(" %d ",k);
					k++;
				}
			
			printf("\n");
		}
}
