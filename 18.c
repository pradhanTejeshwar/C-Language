#include<stdio.h>
int Armstrong(int a);
main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n=Armstrong(n);
		if(n==1)
			printf("An Armstrong Number !");
		else
			printf("Not an Armstrong Number !");
}
int Armstrong(int a)
	{
		int q,r=1,s=0;
		q=a;
			while(q>0)
				{
					r=q%10;
					s=s+r*r*r;
					q=q/10;
				}
					if(a==s)
						return 1;
					else
						return 0;
	}
