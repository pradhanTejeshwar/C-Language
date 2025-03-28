#include<stdio.h>
#include<conio.h>
main ()
{
	int a,b;
	printf("Enter a Value");
	scanf("%d",&a);
	b=a%2;
		switch (b)
			{
				case 0 :
					printf("Even Number !!!");
						break ;
				case 1 :
					printf("Odd Number !!!");
						break ;
				}
}
