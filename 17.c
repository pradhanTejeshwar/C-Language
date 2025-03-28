#include<stdio.h>
int perfect(int a);
main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n=perfect(n);
		if(n==1)
			printf("A Perfect Number !");
		else
			printf("Not a Perfect Number !");
}
int perfect(int a)
	{
		int i,s=0;
		for(i=1;i<a;i++)
			{
				if(a%i==0)
					s=s+i;
			}
				if(s==a)
					return 1;
				else
					return 0;
	}
