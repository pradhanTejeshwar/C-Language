#include<stdio.h>
void main()
{
	int n;
	printf("\nENter the Number : ");
	scanf("%d",&n);
	if(n%3==0)
		printf("\n\tDivisible by 3");
	if(!(n%4==0))
		printf("\n\tDivisible by 4");
	if(!(n%5==0))
		printf("\n\tDivisible by 5");
	getch();
}
