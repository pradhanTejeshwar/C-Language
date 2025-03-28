#include<stdio.h>
main()
{
	char s1[100]="RAM",s2[100]="RAM",s3[100]="Ram";
	int n,o;
	n=strcmp(s1,s2);
	o=strcmp(s2,s3);
		if(n==0)
			printf("\nI");
		else
			printf("\nnI");
		if(o==0)
			printf("\nI");
		else
			printf("\nNI");
}
