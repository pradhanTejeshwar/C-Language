#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char s[5][20],t[20];
	int i,j;
	puts("Enter Five Strings : ");
		for(i=0;i<5;i++)
			{
				scanf("%s",s[i]);
			}
		for(i=1;i<5;i++)
			{
				for(j=1;j<5;j++)
					{
						if(strcmp(s[j-1],s[j])>0)
							{
								strcpy(t,s[j-1]);
								strcpy(s[j-1],s[j]);
								strcpy(s[j],t);
							}
					}
			}
		puts("Strings in Order are :-\n");
			for(i=0;i<5;i++)
				{
					puts(s[i]);
				}
}
