#include<stdio.h>
main()
{
	int n,r,i=0,m,c=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	m=n;
	while(i<10)
		{
			while(n>0)
				{
					r=n%10;
					if(r==i)
						c++;
					n=n/10;
				}
			if(c>0)
				printf("\nFrequency of %d is : %d",i,c);
			c=0;
			n=m;
			i++;
		}
}
