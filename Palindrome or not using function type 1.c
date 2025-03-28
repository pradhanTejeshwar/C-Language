#include<stdio.h>
int palin(int);
int main()
{
	int n,z;
	printf("Enter a Number : ");
	scanf("%d",&n);
	z=palin(n);
}
int palin(int x)
{
	int r,R=0,a;
	a=x;
	while(a>0)
		{
			r=a%10;
			R=R*10+r;
			a=a/10;
		}
			if(x==R)
				printf("Palindrome !");
			else
				printf("Not Palindrome !");
}
