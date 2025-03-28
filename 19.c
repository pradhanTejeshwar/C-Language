#include<stdio.h>
int Palindrome(int a);
main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n=Palindrome(n);
		if(n==1)
			printf("A Palindrome Number !");
		else
			printf("Not a Palindrome Number !");
}
int Palindrome(int a)
	{
		int r,R=0,q;
		q=a;
			while(q>0)
				{
					r=q%10;
					R=R*10+r;
					q=q/10;
				}
					if(R==a)
						return 1;
					else
						return 0;
	}
