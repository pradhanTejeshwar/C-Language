#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int n;
	float x,y;
	clrscr();
	printf("\n Enter the value of x and n : ");
	scanf("%f %d",&x ,&n);
		if(n==1)
			y = 1 + x;
		else if(n==2)
			y = 1 + x/n;
		else if(n==3)
			y = 1 + pow(x,n);
		else
			y = 1 + n*x;
	printf("\n Value of y(x,n) = %f",y);
	getch();
}
