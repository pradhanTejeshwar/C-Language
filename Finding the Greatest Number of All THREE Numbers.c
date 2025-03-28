#include<stdio.h>
#include<conio.h>
main ()
{
	int a,b,c;
	printf(" Enter any three Numbers to find out the Greatest Number of them all ");
	scanf("%d %d %d",&a,&b,&c);
		if (a > b && a > c)
			printf(" The Greatest Number of them all is = %d ",a);
		else if (b > a && b > c)
			printf(" The Greatest Number of them all is = %d ",b);
		else
			printf(" The Greatest Number of them all is = %d ",c);
}
