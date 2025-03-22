#include<stdio.h>
void main()
{
	int n,f,i,j,s=0;
	printf("Enter the Limit : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				f=0;
					for(j=1;j<=i;j++)
						{
							f=f+j;
						}
				s=s+f;
			}
	printf("The Sum is %d",s);
}
