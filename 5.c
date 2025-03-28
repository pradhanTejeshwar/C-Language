#include<stdio.h>
#include<math.h>
main()
{
	int i,n,s=0;
	printf("Enter the nth value : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				s=s+pow(-1,i-1)*pow(i,i);
			}
		printf("\nSum : %d",s);
}
