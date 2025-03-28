#include<stdio.h>
#include<conio.h>
main ()
{
	int a;
	printf("Enter a Number between 0-10");
	scanf("%d",&a);
		if (a==5)
			goto abc;
		else if (a==10)
			goto xyz;
		printf("Wrong Input and it is a number which is neither 5 nor 10");
		abc : printf("You have entered 5");
		xyz : printf("You have entered 10");
		
}
