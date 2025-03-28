#include<stdio.h>
#include<conio.h>
#include<DOS.h>
#include<math.h>
main ()
{
	char ch;
	int x,a,age,week,ch1;
	printf("Choose your Program to Run :- \n \n \n 1. Hello <Your Name> \n 2. Whether the user can Vote \n 3. Convert Character to ASCII \n 4. Convert ASCII to Character \n 5. Checking the day today \n ");
	scanf("%d",&x);
	switch(x)
		{
			case 1 : printf("Enter your name \n ");
					 scanf("%d", &a);
					 printf("Hello %d \n",a);
					 	break;
			case 2 : printf("Enter your Age \n ");
					 scanf("%d", &age);
					 	{
					 	if (age >= 18)
					 		printf("Eligible to VOTE !!! \n ");
					 	else if (age < 18)
					 		printf("Not Eligible to Vote !!! \n");
					 	else
					 		printf("INVALID INPUT !!! \n ");
					 	}
					 		break;
			case 3 : scanf("%c", &ch);
					 printf("%d \n", ch);
					 	break;
			case 4 : scanf("%d", &ch1);
					 printf("%c \n", ch1);
					 	break;
			case 5 : printf("Enter The Numerical Digit !!! (1=Sunday till 7=Saturday) \n");
					 scanf("%d", &week);
					 	{
					 		if(week == 1)
					 			printf("Sunday !!! \n");
					 		else if(week == 2)
					 			printf("Monday !!! \n");
					 		else if(week == 3)
					 			printf("Tuesday !!! \n");
					 		else if(week == 4)
					 			printf("Wednesday !!! \n");
					 		else if(week == 5)
					 			printf("Thursday !!! \n");
					 		else if(week == 6)
					 			printf("Friday !!! \n");
					 		else if(week == 7)
					 			printf("Saturday !!! \n");
					 		else
					 			printf("INVALID INPUT !!! \n");
						 }
						 	break;
		}
}
