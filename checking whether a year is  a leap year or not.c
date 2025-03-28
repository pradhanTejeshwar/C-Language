#include<stdio.h>
#include<conio.h>
main ()
{
	int year ;
	printf("Enter a YEAR to check whether it's a leap year or not !");
	scanf("%d",&year);
		{
			if(( year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
				printf("LEAP YEAR !!");
			else
				printf("NOT A LEAP YEAR !!!");
		}
	getch ();
}
