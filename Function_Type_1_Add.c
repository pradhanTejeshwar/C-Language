#include<stdio.h>
int add(int a,int b);
int main()
{
	int x,y;
	printf("Enter the Value for X and Y : ");
	scanf("%d%d",&x,&y);
	x=add(x,y);
	printf("Sum is : %d",x);
}
int add(int a,int b)
{
	int add;
	add=a+b;
	return add;
}
