#include<stdio.h>
void add();
void main()
{
	add();
}
void add()
{
	int x,y,add;
	printf("Enter the Value for X and Y : ");
	scanf("%d%d",&x,&y);
	add=x+y;
	printf("Sum is : %d",add);
}
