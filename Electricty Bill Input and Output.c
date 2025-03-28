#include<stdio.h>
#include<conio.h>
main()
{
	int pmr,cmr,units;
	char sno [10];
	float amt;
	clrscr ();
	printf("\n Enter Service Number , Previous Month Reading and Current Month Reading.");
	scanf("%s %d %d",sno,&pmr,&cmr);
	units = cmr - pmr;
	amt = units * 1.50;
	printf("\n  Electricity Bill");
	printf("\n __________________");
	printf("\n Service Number : %s",sno);
	printf("\n Units Consumed : %d",units);
	printf("\n Electricity Charges : Rs. %f",amt);
	getch();
}
