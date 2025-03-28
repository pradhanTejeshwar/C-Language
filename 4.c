#include<stdio.h>
#include<math.h>
main()
{
	int n,i,j,s=0,v=0;
	printf("Enter the nth value : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
					{
						v=pow(i,j);
					}
				s=s+v;
			}
		printf("Sum : %d ",s);
}
