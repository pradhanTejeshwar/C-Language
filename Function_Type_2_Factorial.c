#include<stdio.h>
int fact();
int main()
{
	int f;
	f=fact();
	printf("Factorial is : %d",f);
}
int fact()
{
	int n,i,f=1;
	printf("Enter the Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	return f;
}
