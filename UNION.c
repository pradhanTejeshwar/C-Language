#include<stdio.h>
#include<string.h>

union Data
{
	int i;
	float f;
	char str[20];
};

void main()
{
	union Data data;
	
	data.i=10;
	printf("\t data.i : %d \n",data.i);
	
	data.f=220.5;
	printf("\t data.f : %f \n",data.f);
	
	strcpy(data.str,"C Programming");
	printf("\t data.str : %s \n",data.str);
	
	getch();
}
