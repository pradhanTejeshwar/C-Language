#include<stdio.h>
main()
{
	int a,b,c=0,r,n;
	printf("Enter the number: \n");
	scanf("%d",&a);
	n=a;
	while (a>0)
	{
	r=a%10;
	c=(c*10)+r;
	a=a/10;
	}
	if(c==n)
	printf("Palindrome");
	else
	printf("Not Palindrome");
}
