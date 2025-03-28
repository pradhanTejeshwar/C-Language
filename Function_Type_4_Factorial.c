#include<stdio.h>
void fact();
void main()
{
	fact();
}
void fact()
{
	int n,i,f=1;
	printf("Enter a Number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			f=f*i;
		}
	printf("Factorial is : %d",f);
}
