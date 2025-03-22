#include<stdio.h>
main()
{
	int n,i,c=0;
	printf("Enter a Limit : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
			if(n%i==0)
				c++;
					if(c==2)
						printf("Prime Number !");
					else
						printf("Not a Prime Number !");
			else
				printf("Not a Prime Number !");
					
			}
}
