#include<stdio.h>
#include<string.h>
//#include<conio.h>
struct student
{
	int roll[5];
	int marks[5];
	char name[5];
}st;
void main()
{
	int i;

	for(i=1;i<=2;i++)
		{
			printf("Enter the Information for Student %d",i);
			printf("\nEnter the Roll : ");
			scanf("%d",&st.roll[i]);
			printf("\nEnter the Name : ");
			scanf("%s",&st.name[i]);
			printf("\nEnter the Mark : ");
			scanf("%d",&st.marks[i]);
		}
	for(i=1;i<=2;i++)
		{
			printf("\nInformation for Student %d",i);
			printf("\n\tRoll : ");
			printf("%d",st.roll[i]);
			printf("\n\tName : ");
			printf("%s",st.name[i]);
			printf("\n\tMark : ");
			printf("%d",st.marks[i]);
		}
	getch();
}
