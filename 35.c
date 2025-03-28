#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char str[10],ch[100];
	int i=0,j=0;
	printf("Enter the String :");
	gets(ch);
		while(ch[i]!='\0')
			{
				if(ch[i]!=' ')
					{
						str[j]=ch[i];
						j++;
					}
				else
					{
						str[j]='\0';
						printf("%s",strrev(str));
						printf(" ");
						j=0;
					}
				i++;
			}
		str[j]='\0';
		printf("%s",strrev(str));
}
