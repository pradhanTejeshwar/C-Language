#include<stdio.h>
main()
{
	int n,c=0,a,r=0,i;
	printf("Enter any Number : ");
	scanf("%d",&n);
	printf("\nPrime Numbers : ");
	a=n;
		while(a>0)
			{
				r=a%10;
				for(i=1;i<=r;i++)
					{
						if(r%i==0)
							c++;
					}
						if(c==2)
							{
								printf("%d ",r);
							}
				c=0;
				a=a/10;
			}
}
