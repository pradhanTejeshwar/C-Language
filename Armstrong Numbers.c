#include<stdio.h>
#include<conio.h>
main ()
{
	int n,a=0,r,c;
	scanf("%d",&n);
	c=n;
	while (n!=0)
		{
			r=n%10;
			a=a+(r*r*r);
			n=n/10;
		}
		if (c==a)
			printf("It's an ARMSTRONG Number");
		else
			printf("It's not an ARMSTRONG Number");
}
