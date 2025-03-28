#include<stdio.h>
#include<conio.h>
main ()
{
	int a,b;
	char c,d;
	printf("Enter any TWO Numbers !!! \n");
	scanf("%d %d",&a,&b);
	fflush(stdin);
	printf("Enter the SYMBOL !!! \n");
	scanf("%c",&c);
		switch (c)
			{
				case '+' : d=a+b ;
					printf("%c",d);
						break ;
				case '-' : d=a-b ;
					printf("%c",d);
						break ;
				case '*' : d=a*b ;
					printf("%c",d);
						break ;
				case '/' : d=a/b ;
					printf("%c",d);
						break ;
				case '%' : d=a%b ;
					printf("%c",d);
						break ;
			}
}
