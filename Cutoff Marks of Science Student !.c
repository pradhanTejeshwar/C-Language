#include<stdio.h>
#include<conio.h>
main()
{
	//to print the cutoff marks of a student;
	float M,P,C,E,CM;
	printf(" \n Please Enter the MARKS obtained by the Student in Mathematics,Physics and Chemistry out of 200");
	scanf("%f %f %f",&M,&P,&C);
	printf("\n Please Enter the MARKS obtained by the Student in their Entrance Examination out of 100");
	scanf("%f",&E);
	CM = (M/2)+(P/2)+(C/2)+E;
	printf("\n Therefore, the CUTOFF MARKS for the Student according to his MARKS in Mathematics,Physics,Chemistry and Entrance Examination is : %f",CM);
	getch();
}
