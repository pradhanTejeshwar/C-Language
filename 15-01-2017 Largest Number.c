#include<stdio.h>
main()
{
	int a,n,L=0;
	printf("Enter any number : ");
	scanf("%d",&n);
		while(n>0)
			{
				a=n%10;
					if(a>L)
						L=a;
				n=n/10;
			}
		printf("Largest Number := %d",L);
}
