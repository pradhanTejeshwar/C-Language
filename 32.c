#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
main()
{
	int l,i,v=0,w=0,c=0;
	char ch[100];
	printf("Enter a String : ");
	gets(ch);
	l=strlen(ch);
		for(i=0;i<l;i++)
			{
				ch[i]=tolower(ch[i]);
					if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')
						{
							v++;
						}
					else if(ch[i]==' ')
						{
							w++;
						}
					else
						{
							c++;
						}
			}
		printf("\nThe number of Vowels are : %d",v);
		printf("\nThe number of Consonants are : %d",c);
		printf("\nThe number of Words are : %d",w+1);
}
