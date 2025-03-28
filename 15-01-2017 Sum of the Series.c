#include<stdio.h>
main()
{
	int n,i,j,S=0,z=0;
	printf("Enter the nth Value : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
					{
						z=pow(i,j);
					}
				S=S+
				
				z;
			}
	printf("\nSum of the Series : %d",S);
}
