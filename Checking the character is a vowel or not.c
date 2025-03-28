#include<stdio.h>
#include<conio.h>
main ()
{
	char alpha;
	printf("Enter a Character from a-Z");
	scanf("%c",&alpha);
		switch (alpha)
			{
				case 'a':
				case 'A':
				case 'e':
				case 'E':
				case 'i':
				case 'I':
				case 'o':
				case 'O':
				case 'u':
				case 'U': printf("A Vowel");
					break ;
				default : printf("Not A Vowel");
					break ;
			}
}
