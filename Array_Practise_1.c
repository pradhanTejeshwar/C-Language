#include<stdio.h>
main()
{
	char n[5];
	int r[5],i;
	printf("Enter your Roll Number and Name !\n");
	for(i=0;i<5;i++)
		{
			scanf("\n%d%c",&r[i],&n[i]);
		}
	for(i=0;i<5;i++)
		{
			printf("\n%d%c",&r[i],&n[i]);
		}
}
