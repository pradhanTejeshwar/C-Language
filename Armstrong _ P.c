#include<stdio.h>
main()
{
	int n,r,a,s=0,v=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	a=n;
	while(a>0)
		{
			r=0;
			r=a%10;
			v=0;
			v=r*r*r;
			a=a/10;
		}
		s=s+v;
		if(s==n)
			{
				printf("%d is an Armstrong Number",n);
			}
		else
			{
				printf("%d is not an Armstrong Number",n);
			}
}
