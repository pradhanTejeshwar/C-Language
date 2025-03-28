#include<stdio.h>
main()
{
	char n;
	int i=1;
	printf("Enter your name !!! \n");
	scanf("%c",&n);
	do
	{
		printf("%c \n",n);
		i++;
	}while(i<=100);
}
