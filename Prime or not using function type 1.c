#include<stdio.h>
int prime(int);
int main()
{
	int n,z;
	printf("Enter a Number : ");
	scanf("%d",&n);
	z=prime(n);
	getch();
}
int prime(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
			if(a%i==0)
				c++;
				{
					if(c==2)
						printf("Prime !");
					else
						printf("Not Prime !");
				}
}
