#include<stdio.h>
main()
{
	int r,rev=0,n=4321;
		while(n>0)
			{
				r=n%10;
				n=n/10;
				rev=r;
			}
}
