//Output
//   1   
//  2 2  
// 3 3 3 
//4 4 4 4
#include<stdio.h>
main()
{
	int i,j,k=1,l;
	for(i=4;i>=1;i--)
		{
			for(l=1;l<=i;l++)
				{
					printf(" ");
				}
			for(j=4;j>=i;j--)
				{
					printf("%d ",k);	
				}
			k++;
			printf("\n");
		}	
}
