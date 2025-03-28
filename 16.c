#include<stdio.h>
int prime(int a);
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n=prime(n);
		if(n==1)
			printf("Prime !");
		else
			printf("Not Prime !");
}
int prime(int a)
{
	int c=0,i;
	for(i=1;i<=a;i++)
		{
			if(a%i==0)
				c++;
		}
	if(c==2)
		return 1;
	else
		return 0;
}
