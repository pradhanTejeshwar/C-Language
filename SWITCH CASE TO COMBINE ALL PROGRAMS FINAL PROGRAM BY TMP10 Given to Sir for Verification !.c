#include<stdio.h>
#include<DOS.h>
main()
{
	float Pi=3.14,r,Ar,amt;
	int X,age,n,day,a,b,c,A,D,s,N,alpha,m,sn,pm,cm,units,i,j;
	char name[50],nt,C;
	printf("Select a Program to Run ! :- \n \n \n");
	printf("1.  Hello <Name> \n");
	printf("2.  Find Whether the User can Vote or not ! \n");
	printf("3.  ASCII value to Character - Conversion ! \n");
	printf("4.  Character to ASCII value - Conversion ! \n");
	printf("5.  Checking the day Today \n");
	printf("6.  Find the Greatest Number of the Three Numbers you Input ! \n");
	printf("7.  Checking whether a Number is Positive,Negative or a Zero ! \n");
	printf("8.  Find whether the Number is An Odd or an Even Number \n");
	printf("9.  Find the Area of a Square and a Circle \n");
	printf("10. Check whether the Given Number From th User is greater than 100 or not and \n    if it is then to check again that if it's EVEN or ODD ! \n");
	printf("11. Print The Name of the Programmer using Programming Codes ! \n");
	printf("12. Calculator ! \n");
	printf("13. Programming and Coding LOVE !\n");
	printf("14. Find your Grade ! \n");
	printf("15. Electricty Bill Preview With taking input from the User ! \n");
	printf("16. Shutdown The PC using TMP10 Program ! \n");
	printf("\n \n \n \n \n \n \n \n \n \n Thanks for using this Program made by TMP10 \n \n \n");
	scanf("%d", &X);
	switch(X)
		{
			case 1 :{
						//Hello <Name>
						printf("\n\n\n");
						printf("Enter Your Name ! \n");
						scanf("%s", &name);
						printf("Hello %s \n", name);
					}	
						break;				
			case 2 :{
						//Find Whether the User can Vote or not !
						printf("\n\n\n");
						printf("Enter your name ! \n");
						scanf("%s", &name);
						printf("Enter your age ! \n");
						scanf("%d", &age);
							if(age >= 18)
								printf("%s is able to vote ,Age is %d \n", name, age);
							else if(age < 18)
								printf("%s is not able to vote ,Age is %d \n", name, age);
							else
								printf("INVALID INPUT.....ERROR...!!! \n");
					}
						break;
			case 3 :{
						//ASCII value to Character - Conversion !
						printf("\n\n\n");
						printf("Input a ASCII Value ! \n");
						scanf("%d", &n);
						printf("%c is the Character Generated from the input %d \n", n, n);
					}
						break;
			case 4 :{
						//Character to ASCII value - Conversion !
						printf("\n\n\n");
						printf("Input a Character ! \n");
						scanf("%s", &nt);
						printf("%d is the ASCII Value Generated from the input %c \n", nt, nt);
					}
						break;
			case 5 :{
						//Checking the day Today
						printf("\n\n\n");
						printf("Enter a day from 1-7 \n( 1=Sunday, 2=Monday, 3=Tuesday, 4=Wednesday, 5=Thursday, 6=Friday, 7=Saturday) \n");
						scanf("%d", &day);
							switch (day)
								{
									case 1 : printf(" It is Sunday \n");
										break ;
									case 2 : printf(" It is Monday \n");
										break ;
									case 3 : printf(" It is Tuesday \n");
										break ;
									case 4 : printf(" It is Wednesday \n");
										break ;
									case 5 : printf(" It is Thursday \n");
										break ;
									case 6 : printf(" It is Friday \n");
										break ;
									case 7 : printf(" It is Saturday \n");
										break ;
									default : printf("Input ERROR !!! \n");
										break ;
								}
					}
						break;
			case 6 :{
						//Find the Greatest Number of the Three Numbers you Input !
						printf("\n\n\n");
						printf(" Enter any three Numbers to find out the Greatest Number of them all \n");
						scanf("%d %d %d", &a, &b, &c);
							if (a > b && a > c)
								printf(" The Greatest Number of them all is = %d \n", a);
							else if (b > a && b > c)
								printf(" The Greatest Number of them all is = %d \n", b);
							else
								printf(" The Greatest Number of them all is = %d \n", c);
									break ;
					}
						break;
			case 7 :{	
						//Checking whether a Number is Positive,Negative or a Zero !
						printf("\n\n\n");
						printf("Enter any number ! \n");
						scanf("%d", &a);
							{
								if(a > 0)
									printf("Positive \n");
								else if(a < 0)
									printf("Negative \n");
								else if(a == 0)
									printf("Zero \n");
								else
									printf("INPUT ERROR !!! \n");
							}
					}
						break ;
			case 8 :{
						//Find whether the Number is An Odd or an Even Number
						printf("\n\n\n");
						printf("Enter a Number ! \n");
						scanf("%d", &n);
							if(n % 2 == 0)
								printf("%d is an Even Number ! \n", n);
							else if(n % 2 != 0)
								printf("%d is an Odd Number ! \n", n);
							else
								printf("INVALID INPUT..... ERROR !!!... \n");
					}
						break;
			case 9 :{
						//Find the Area of a Square and a Circle
						printf("\n\n\n");
						printf("Enter the side of the square to find it's Area \n");
						scanf("%d", &s);
						A = s * s;
						printf("The Area of the square is = %d \n", A);
						printf("Enter the radius of the Circle to get it's Area \n");
						scanf("%f", &r);
						Ar = Pi * r * r;
						printf("The Area of the Circle is = %f \n", Ar);
					}
						break;
			case 10:{
						//Check whether the Given Number From th User is greater than 100 or not and if it is then to check again that if it's EVEN or ODD !
						printf("\n\n\n");
						printf("   Enter your Number to Check whether it's greater than 100 or not and if it is then to check again that if it's EVEN or ODD   \n");
						scanf("%d", &N);
							if (N > 100)
								if (N % 2 == 0)
									printf("   The Number entered %d is Greater than 100 and is an EVEN Number   \n", N);
								else if(N % 2 != 0)
									printf("   The Number entered %d is Greater than 100 and is an ODD Number   \n", N);
								else
									printf("INVALID INPUT.....ERROR !!!...");
							else if(N < 100)
								printf("   The Number entered %d is not Greater than 100   \n", N);
							else
								printf("INVALID INPUT.....ERROR !!!...");
					}
						break;
			case 11:{
						//Print The Name of the Programmer using Programming Codes !
						printf("\n\n\n");
						printf("\n\n\n");
						printf("\n\n\n");
						for(i=1;i<=8;i++)
							{
								printf("T");
							}
								printf("\n");
									for(j=1;j<=5;j++)
										{
											printf("   TT \n");
										}
						printf("\n \n \n");
							for(i=1;i<=8;i++)
								{
									printf("E");
								}
						printf("\n");
						printf("E \n");
						printf("E \n");
							for(j=1;j<=3;j++)
								{
									printf("E");
								}
						printf("\n");
						printf("E \n");
						printf("E \n");
							for(i=1;i<=8;i++)
								{
									printf("E");
								}
						printf("\n");
						printf("\n \n \n");
							for(i=1;i<=8;i++)
								{
									printf("J");
								}
						printf("\n");
							for(j=1;j<=3;j++)
								{
									printf("   J \n");
								}
						printf(" J J \n");
						printf(" JJJ \n");
						printf("\n \n \n");
							for(i=1;i<=6;i++)
								{
									printf("U      U \n");
								}
									for(j=1;j<=8;j++)
										{
											printf("U");
										}
						printf("\n");
						printf("\n \n \n");
					}
						break;
			case 12:{
						//Calculator !
						printf("\n\n\n");
						printf("Enter any TWO Numbers !!! \n");
						scanf("%d %d", &a, &b);
						fflush(stdin);
						printf("Enter the SYMBOL !!! \n");
						scanf("%c", &C);
						switch (C)
							{
								case '+' : D=a+b ;
									printf("%d \n", D);
										break ;
								case '-' : D=a-b ;
									printf("%d \n", D);
										break ;
								case '*' : D=a*b ;
									printf("%d \n", D);
										break ;
								case '/' : D=a/b ;
									printf("%d \n", D);
										break ;
								case '%' : D=a%b ;
									printf("%d \n", D);
										break ;
							}
					}
						break;
			case 13:{
						//Love for Coding and Programming
						printf("\n\n\n");
						for(i=1;i>=1;i++)
							printf("I LOVE C PROGRAMMING ! \n");
					}
						break;
			case 14:{
						//Find your Grade !
						printf("\n\n\n");
						printf("   Enter your MARKS out of 100   \n");
						scanf("%d", &m);
							if (m >= 90 && m < 100)
								printf("  Your Grade is O = Outstanding ,Marks entered is : %d \n", m);		
							else if (m >= 80 && m < 90)
								printf("  Your Grade is E = Excellent ,Marks entered is : %d \n", m);
							else if (m >= 70 && m < 80)
								printf("  Your Grade is A ,Marks entered is : %d \n", m);
							else if (m >= 60 && m < 70)
								printf("  Your Grade is B ,Marks entered is : %d \n", m);		
							else if (m >= 50 && m < 60)
								printf("  Your Grade is C ,Marks entered is : %d \n", m);		
							else if (m >= 40 && m < 50)
								printf("  Your Grade is D ,Marks entered is : %d \n", m);		
							else if (m < 40)
								printf("  Your Grade is F ,Marks entered is : %d \n", m);	
							else
								printf("INVALID INPUT.....ERROR !!!... \n");
					}
						break;
			case 15:{
						//Electricty Bill Preview With taking input from the User !
						printf("\n\n\n");
						printf("\n Enter Service Number , Previous Month Reading and Current Month Reading. \n");
						scanf("%s %d %d", &sn, &pm, &cm);
						units = cm - pm;
						amt = units * 1.50;
						printf("\n  Electricity Bill \n");
						printf("\n __________________ \n");
						printf("\n Service Number : %c \n", sn);
						printf("\n Units Consumed : %d \n", units);
						printf("\n Electricity Charges : Rs. %f \n", amt);
					}
						break;
			case 16:{
						//Shutdown The PC using TMP10 Program !
						printf("\n\n\n");
						printf("Shutting Down the System Using the program created by TMP10\n ");
						system("shutdown -s -t 01 \n");
					}
						break;
			default:{
						//Default Option
						printf("\n\n\n");
						printf("ERROR !!! WRONG OR INVALID INPUT ! \n");
		   			}
						break;
		}
}
