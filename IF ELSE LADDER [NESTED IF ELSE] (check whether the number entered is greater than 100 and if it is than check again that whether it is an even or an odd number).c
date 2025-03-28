#include<stdio.h>
#include<conio.h>
main ()
{
	int n;
	printf("   Enter your Number to Check whether it's greater than 100 or not and if it is then to check again that if it's EVEN or ODD   ");
	scanf("%d",&n);
		if (n > 100)
			if (n % 2 == 0)
				printf("   The Number entered is Greater than 100 and is an EVEN Number   ");
			else
				printf("   The Number entered is Greater than 100 and is an ODD Number   ");
		else
			printf("   The Number entered is not Greater than 100   ");
}
