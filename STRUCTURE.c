#include<stdio.h>

struct Student
{
	char name[50];
	int roll;
	float marks;
}s;

void main()
{
	printf("Enter the Information :- ");
	
	printf("\n\t Enter Name : ");
	scanf("%s",&s.name);
	printf("\n\t Enter Roll Number : ");
	scanf("%d",&s.roll);
	printf("\n\t Enter Marks : ");
	scanf("%f",&s.marks);
	
	printf("\n\n\n Displaying the Information :- ");
	
	printf("\n\t Name : ");
	puts(s.name);
	printf("\n\t Roll Number : %d",s.roll);
	printf("\n\t Marks : %.1f",s.marks);
	getch();
}
