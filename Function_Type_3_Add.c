#include<stdio.h>
void add(int a,int b);
void main()
{
	int x,y;
	printf("Enter the Value for X and Y : ");
	scanf("%d%d",&x,&y);
	add(x,y);
}
void add(int a,int b)
{
	int add;
	add=a+b;
	printf("\nSum is : %d",add);
}
