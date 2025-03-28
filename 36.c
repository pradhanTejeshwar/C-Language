#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main()
{
	char ch[100],n[100];
	int l,i,s,k,z=0;
	printf("Enter a String : ");
	gets(ch);
	l=strlen(ch);
		for(i=0;i<l;i++)
			{
				if(i==0)
					{
						n[z++]=ch[i];
					}
				if(ch[i]==' ')
					{
						s=i;
							for(k=s;k<l;k++)
								{
									n[z++]=ch[k];
								}
					}
			}
		puts(n);
}
