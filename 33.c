#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
main()
{
	char ch[20];
	int i,l;
	printf("Enter a String : ");
	gets(ch);
	l=strlen(ch);
		for(i=0;i<l;i++)
			{
				if(isupper(ch[i]))
					{
						ch[i] = tolower(ch[i]);
					}
				else if(islower(ch[i]))
					{
						ch[i]=toupper(ch[i]);
					}
			}
		printf("\nThe String is converted to : ");
		puts(ch);
}
