#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter a Number : ");
	scanf("%d\n",&n);
		for(i=2;i<=n;i++)
			{
				if(n%i==0)
					c=1;
						break;
			}
		if(c==0)
			printf("Prime !");
		else
			printf("Not Prime !");
}
