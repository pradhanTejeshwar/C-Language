#include<stdio.h>
void fact(int a);
void main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	fact(n);
}
void fact(int a)
{
	int i,f=1;
	for(i=1;i<=a;i++)
		{
			f=f*i;
		}
	printf("Factorial is : %d",f);
}
