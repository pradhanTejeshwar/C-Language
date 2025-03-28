#include<stdio.h>
main()
{
	char n;
	int L,S;
	printf("Enter an Alphabet : ");
	scanf("%c",&n);
	L=(n=='A'||n=='E'||n=='I'||n=='O'||n=='U');
	S=(n=='a'||n=='e'||n=='i'||n=='o'||n=='u');
		if(L==S)
			printf("\n%c is a Consonant",n);
		else
			printf("\n%c is a Vowel",n);
}
