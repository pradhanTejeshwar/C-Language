#include<stdio.h>
main()
{
	char a;
	printf("Enter a Character ! \n");
	scanf("%c",&a);
		{
		if (a >= 'A' && a <= 'Z')
			printf("Lowercase Character of your Input is :%c",a+32);
			
		else if (a >= 'a' && a <= 'z')
			printf("Uppercase Character of your Input is :%c",a-32);
			
		else
			printf("INVALID INPUT !!!");
		}
}
