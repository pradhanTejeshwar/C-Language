#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter any number !");
	scanf("%d",&a);
		{
			if(a>0)
				printf("Positive");
			else if(a<0)
				printf("Negative");
			else if(a==0)
				printf("Zero");
			else
				printf("INPUT ERROR !!!");
		}
	getch ();
}
