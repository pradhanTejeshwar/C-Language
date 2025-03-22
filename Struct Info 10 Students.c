#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Student
{
	char name[50];
	int roll;
	float marks;
}s[10];

void main()
{
	//struct Student
	int i;
	printf("Enter the Information :- ");
	
	for(i=1;i<=10;i++)
		{
			printf("\n\t\tEnter the Details for Student %d",i);
			printf("\n\tEnter Name : ");
			scanf("%s",&s[i].name);
			printf("\n\tEnter Roll Number : ");
			scanf("%d",&s[i].roll);
			printf("\n\tEnter Marks : ");
			scanf("%f",&s[i].marks);
		}
				
	printf("Displaying the Information :- ");
	
	for(i=1;i<=10;i++)
		{
			printf("\n\t\tDisplaying Information for Student %d",i);
			printf("\n\tName : ");
			puts(s[i].name);
			printf("\n\tRoll Number : %d",s[i].roll);
			printf("\n\n\tMarks : %f",s[i].marks);
		}
	getch();
}
