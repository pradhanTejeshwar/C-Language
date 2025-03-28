#include<stdio.h>
main()
{
	int r,n,L=0;
	printf("Enter any number : ");
	scanf("%d",&n);
		while(n>0)
			{
				r=0;
				r=n%10;
				n=n/10;
					if(L<r)
						L=r;
			}
		printf("Largest number is : %d",L);
}
