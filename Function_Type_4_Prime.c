#include<stdio.h>
void prime();
void main()
{
	prime();
}
void prime()
{
	int c=0,i,n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			if(n%i==0)
				c++;
		}
	if(c==2)
		printf("Prime !");
	else
		printf("Not Prime !");
}
