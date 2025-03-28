#include<stdio.h>
main()
{
	int n,r;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n>0)
		{
			r=n%10;
			if(r%2!=0)
				r=0;
			printf("%d",r);
			n=n/10;
		}
}
