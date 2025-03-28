#include<stdio.h>
int fact(int);
int main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n=fact(n);
	printf("Factorial is = %d",n);
}
int fact(int a)
{
	int i,f=1;
		for(i=1;i<=a;i++)
			{
				f=f*i;
			}
		return f;
}
