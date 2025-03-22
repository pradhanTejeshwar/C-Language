#include<stdio.h>
main()
{
	int i,j,s,n;
	printf("Enter the No. ! ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
					{
						s=s+j;
					}
			}
		printf("%d ",s);
}
