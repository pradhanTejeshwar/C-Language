#include<stdio.h>
#include<conio.h>
#include<DOS.h>
#include<math.h>
main()
{
	char name[50],n,alpha,sno[10];
	int x,a,b,age,day,an,c,s,A,N,d,m,pmr,cmr,units;
	float r,Ar,amt,Pi=3.14;
	printf("Select a Program :- \n \n \n 1.  Hello (Your Name) \n 2.  Find Whether the User can Vote or not ! \n 3.  6 \n 4.  Convert ASCII value to it's Character \n 5.  Checking the day Today \n 6.  Find the Greatest Number of the Three Numbers you Input ! \n 7.  Checking whether a Number is Positive,Negative or a Zero ! \n 8.  Find whether the Number is An Odd or an Even Number \n 9.  Find the Area of a Square and a Circle \n 10. Check whether the Given Number From th User is greater than 100 or not and      if it is then to check again that if it's EVEN or ODD ! \n 11. Convert any Character to its uppercase or lowercase \n 12. Check whether the Character is a Vowel or not ! \n 13.  \n 14. Find your Grade ! \n 15. Electricty Bill Preview With taking \n 16. Shutdown The PC \n \n \n \n \n \n \n \n \n \n \n Thanks for using this Program made by TMP10 \n");
	scanf("%d",&x);
	switch (x)
			{
				case 1 :	printf("Enter your name");
							scanf("%s",name);
							printf("Hello %s",name);
								break;
				
				case 2 :	printf("Enter your age");
							scanf("%d",&age);
								{
									if (age >= 18)
										printf("Eligible to VOTE \n");
									else
										printf("NOT Eligible to VOTE \n You are a minor ! \n");
								}
									break ;
				case 3 :break ;
				case 4 :	printf("Input a ASCII Value ! \n");
							scanf("%d",&n);
							printf("%c",n);
								break ;
				case 5 :	printf("Enter a day from 1-7 starting 1 as Sunday \n");
							scanf("%d",&day);
								switch (day)
									{
										case 1 : printf("Sunday");
											break ;
										case 2 : printf("Monday");
											break ;
										case 3 : printf("Tuesday");
											break ;
										case 4 : printf("Wednesday");
											break ;
										case 5 : printf("Thursday");
											break ;
										case 6 : printf("Friday");
											break ;
										case 7 : printf("Saturday");
											break ;
										dafault : printf("Input ERROR !!!");
											break ;
									}
										break ;
				case 6 :	printf(" Enter any three Numbers to find out the Greatest Number of them all \n ");
							scanf("%d %d %d",&a,&b,&c);
								if (a > b && a > c)
									printf(" The Greatest Number of them all is = %d ",a);
								else if (b > a && b > c)
									printf(" The Greatest Number of them all is = %d ",b);
								else
									printf(" The Greatest Number of them all is = %d ",c);
										break ;
				case 7 :	printf("Enter any number ! \n");
							scanf("%d",&a);
								{
									if(a>0)
										printf("Positive");
									else if(a<0)
										printf("Negative");
									else if(a==0)
										printf("Zero");
									else
										printf("INPUT ERROR !!!");
								}
									break ;
				case 8 :	printf("Enter a Value \n");
							scanf("%d",&a);
							b=a%2;
								switch (b)
									{
										case 0 :
											printf("Even Number !!! \n");
												break ;
										case 1 :
											printf("Odd Number !!! \n");
												break ;
									}
										break ;
				case 9 :	printf("Enter the side of the square to find it's Area \n");
							scanf("%d",&s);
							A = s * s;
							printf("The Area of the square is = %d \n",A);
							printf("Enter the radius of the Circle to get it's Area \n");
							scanf("%f",&r);
							Ar = Pi * r * r;
							printf("The Area of the Circle is = %f \n",Ar);
								break ;
				case 10 :	printf("   Enter your Number to Check whether it's greater than 100 or not and if it is then to check again that if it's EVEN or ODD   \n");
							scanf("%d",&N);
								if (N > 100)
									if (N % 2 == 0)
										printf("   The Number entered is Greater than 100 and is an EVEN Number   \n");
									else
										printf("   The Number entered is Greater than 100 and is an ODD Number   \n");
								else
									printf("   The Number entered is not Greater than 100   \n");
										break ;
				case 11 :		printf("Enter a Character ! \n");
								scanf("%c",&a);
								{
									if (a >= 'A' && a <= 'Z')
										printf("Lowercase Character of your Input is :%c",a+32);
			
									else if (a >= 'a' && a <= 'z')
										printf("Uppercase Character of your Input is :%c",a-32);
			
									else
										printf("INVALID INPUT !!!");
								}	break ;
				case 12 :	printf("Enter a Character from a-Z \n");
							scanf("%d",&alpha);
								switch (alpha)
									{
										case 'a':
										case 'A':
										case 'e':
										case 'E':
										case 'i':
										case 'I':
										case 'o':
										case 'O':
										case 'u':
										case 'U': printf("A Vowel \n");
											break ;
										default : printf("Not A Vowel \n");
											break ;
									}
										break ;
				case 13 :		break;
				case 14 :		printf("   Enter your MARKS out of 100   \n");
								scanf("%d",&m);
									if (m >= 90 && m < 100)
										printf("  Your Grade is O  \n");		
									else if (m >= 80 && m < 90)
										printf("  Your Grade is E  \n");
									else if (m >= 70 && m < 80)
										printf("  Your Grade is A  \n");
									else if (m >= 60 && m < 70)
										printf("  Your Grade is B  \n");		
									else if (m >= 50 && m < 60)
										printf("  Your Grade is C  \n");		
									else if (m >= 40 && m < 50)
										printf("  Your Grade is D  \n");		
									else if (m < 40)
										printf("  Your Grade is F  \n");	
											break;
				case 15 :	printf("\n Enter Service Number , Previous Month Reading and Current Month Reading. \n");
							scanf("%s %d %d",sno,&pmr,&cmr);
							units = cmr - pmr;
							amt = units * 1.50;
							printf("\n  Electricity Bill \n");
							printf("\n __________________ \n");
							printf("\n Service Number : %s \n",sno);
							printf("\n Units Consumed : %d \n",units);
							printf("\n Electricity Charges : Rs. %f \n",amt);
								break ;
				case 16 :	printf("Your Computer System is Shutting Down \n ");
							system("shutdown -s \n");
							break;
				default :	printf("ERROR !!! WRONG OR INVALID INPUT ! \n");
			}
}
