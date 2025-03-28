#include<stdio.h>
#include<math.h>
main()
{
	int n,r,z=0,i=0;
	printf("Enter a Decimal Number : ");
	scanf("%d",&n);
		while(n>0)
			{
				r=n%2;
				z=z+(r*pow(10,i++));
				n=n/2;
			}
		printf("Binary Value : %d",z);
}
