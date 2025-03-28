#include<stdio.h>
void prime(int a);
void main()
{
	int z,n,c;
	printf("Enter a Number : ");
	scanf("%d",&n);
	prime(n);
}
void prime(int a)
{
	int c=0,i;
	for(i=1;i<=a;i++)
		{
			if(a%i==0)
				c++;
		}
	if(c==2)
		printf("Prime !");
	else
		printf("Not Prime !");
}
