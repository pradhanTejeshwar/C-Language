#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<conio.h>
void main()
{
	int l,i,j=0;
	char ch[100],n[100];
	printf("Enter the String : ");
	gets(ch);
	l=strlen(ch);
		for(i=l-1;i>=0;i--)
			{
				n[j]=ch[i];
				j++;
			}
		if(strcmp(ch,n)==0)
			{
				printf("The String is Palindrome !");
			}
		else
			{
				printf("The String is not Palindrome !");
			}
}
