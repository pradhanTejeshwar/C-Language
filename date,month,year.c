#include<stdio.h>
#include<conio.h>
main()
{
	int y,m,d;
	clrscr();
	printf(" \n Enter the value of year");
	scanf("%d",&y);
	printf(" \n Enter the calue of month");
	scanf("%d",&m);
	printf(" \n Enter the value of days");
	scanf("%d",&d);
	d=y*365+m*30+d;
	printf(" \n Total days = %d",d);
}
