#include<stdio.h>
int fact(int);
void main ()
{
	int n,z;
	printf("Enter a Number : ");
	scanf("%d",&n);
	z=fact(n);
	printf("Factorial : %d",z);
}
	int fact(int x)
		{
			int i,f=1;
			for(i=1;i<=x;i++)
				{
					f=f*i;
				}
			return f;
		}
