#include<stdio.h>

struct Student
{
	char name[50];
	int roll;
	float marks;
}s[10];

void main()
{
	int i;
	
	printf("Enter the Information of Students :- ");
	for(i=0;i<10;++i)
		{
			s[i].roll=i+1;
			printf("\n\tFor Roll Number : %d",s[i].roll);
			printf("\n\tEnter Name : ");
			scanf("%s",&s[i].name);
			printf("\n\tEnter Marks : ");
			scanf("%f",&s[i].marks);
			printf("\n");
		}
				
	printf("Displaying the Information :- ");
	for(i=0;i<10;++i)
		{
			printf("\n\tRoll Number : %d",i+1);
			printf("\n\n\tName : ");
			puts(s[i].name);
			printf("\n\tMarks : %f",s[i].marks);
			printf("\n");
		}
	getch();
}
