#include<stdio.h>
int fact(int x);
main()
{
	int n;
	printf("Enter a Number : ");
	scanf("%d",&n);
	n=fact(n);
	printf("Factorial is : %d",n);
}
int fact(int x)
{
	if(x==1||x==0)
		return 1;
	else
		return x*fact(x-1);
}
