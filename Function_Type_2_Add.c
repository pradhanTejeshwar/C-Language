#include<stdio.h>
int add();
int main()
{
	int x;
	x=add();
	printf("Sum is : %d",x);
}
int add()
{
	int x,y,add;
	printf("Enter the Value for X and Y : ");
	scanf("%d%d",&x,&y);
	add=x+y;
	return add;
}
