#include<stdio.h>
char vow();
char main()
{
	char n,z;
	printf("To determine if it is a vowel or not\nEnter a character : ");
	scanf("%c",&n);
	vow(n);
	printf("%c",z);
}
char vow(x)
	{
		switch(x)
			{
				case 'a'	:
				case 'e'	:
				case 'i'	:
				case 'o'	:
				case 'u'	:
				case 'A'	:
				case 'E'	:
				case 'I'	:
				case 'O'	:
				case 'U'	:printf("Vowel");
				break;
				default		:printf("Not Vowel");
			}
	}
