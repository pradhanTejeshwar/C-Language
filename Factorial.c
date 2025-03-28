#include<stdio.h>
main()
{
	int i,j,n;
	float s=0,f;
	printf("Enter the No. ! ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				f=0;
				for(j=1;j<=i;j++)
					{
						f=f+j;
					}
				s=i/f;
			}
		printf("%f ",s);
}
