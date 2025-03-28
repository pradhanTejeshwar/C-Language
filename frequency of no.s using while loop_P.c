#include<stdio.h>
main()
{
	long int m,n,i=0,c=0,r;
	printf("Enter 10 Number : ");
	scanf("%ld",&n);
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
				printf("\nFrequency of %ld is %ld",i,c);
			c=0;
			n=m;
			i++;
		}
}
