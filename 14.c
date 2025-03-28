#include<stdio.h>
main()
{
	int n,L=1,S=9,v,a,x=0,y=1;
	printf("Enter the Number : ");
	scanf("%d",&n);
	v=n;
		while(n>0)
			{
				a=n%10;
					if(a>L)
						L=a;
				n=n/10;
			}
		n=v;
			while(n>0)
				{
					a=n%10;
						if(a<S)
							S=a;
					n=n/10;
				}
		n=v;
			while(n>0)
				{
					a=n%10;
						if(a==S)
							x=x+(L*y);
						else if(a==L)
							x=x+(S*y);
						else
							x=x+(a*y);
					y=y*10;
					n=n/10;
				}
		printf("\nAfter Replacing Smallest and Largest Digit : %d ",x);
}
