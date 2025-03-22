#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter the value of X and Y : ");
	scanf("%d %d",&x,&y);
	if(x^y)
		printf("Not Equal");
	else 
		printf("Equal");
	getch();
}
