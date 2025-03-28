#include<stdio.h>
#include<conio.h>
main ()
{
	char alpha ;
	printf("Enter a Alphabet to find out whether it's a uppercase or a lowercase character");
	scanf("%c",&alpha);
		{
			if( alpha >= 'A' && alpha <= 'Z')
				printf("Uppercase Character");
			else if ( alpha >= 'a' && alpha <= 'z')
				printf("Lowercase Character");
			else
				printf("INPUT ERROR !!!");
		}
	getch ();
}
