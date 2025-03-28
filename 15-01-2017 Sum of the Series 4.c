#include<stdio.h>
main()
{
	int i,j,n,S=0,z;
	printf("Enter the nth value : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			z=1;
			for(j=1;j<=i;j++)
				z=z*j;
			S=S+z;
			printf(" %d ",S);
		}
	printf("\n %d ",S);
}
