#include<stdio.h>
main()
{
	int n,r,z=0,i=0;
	printf("Enter a Binary Number : ");
	scanf("%d",&n);
		while(n>0)
			{
				r=n%10;
				z=z+(r*pow(2,i++));
				n=n/10;
			}
		printf("\nDecimal Value : %d",z);
}
