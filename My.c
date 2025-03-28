#include<stdio.h>
main()
{
	int w0,w1,w2,w3,w4,w5,w6,w7,w8,w9,w10;
	int v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10;
	char x0,x1,x2,x3,x4,x5,x6,x7,x8,x9,x10;
	char y0[20],y1[20],y2[20],y3[20],y4[20],y5[20],y6[20],y7[20],y8[20],y9[20],y10[20];
	char z0[30];
	printf("Please Enter Your Name : ");
	scanf("%s",&y0);
//	printf("\nPlease Enter Your Gender : ");
//	printf("\n1. Male \n2. Female");
//	scanf("%d",&w0);
//	printf("\nPlease Enter Your Age : ");
//	scanf("%d",&w1);
//			{
//				if(w0=='1' && w1>21)
//					z0=("Mr %s",y0);
//				else if(w0=='2' && w1>21)
//					z0=("Mrs %s",y0);
//				else if(w0=='1' && w1<=21)
//					z0=("%s",yo);
//				else if(w0=='2' && w1<=21)
//					z0=("%s",yo);
//				else
//					z0=("Invalid !");
//			}
		{
			printf("\n1. If Else");
			printf("\n2. If Else Ladder");
			printf("\n3. Switch");
			printf("\n4. Goto Statement");
			printf("\n5. Break Statement");
			printf("\n6. Continue Statement");
			printf("\n7. Do-While Loop");
			printf("\n8. While Loop");
			printf("\n9. For Loop");
			printf("\n10. Nested Do-While Loop");
			printf("\n11. Nested While Loop");
			printf("\n12. Nested For Loop");
			printf("\n13. Patterns(Types of Patten)");
			printf("\n14. Array");
			printf("\n15. Array(Types of Arrays)");
			printf("\n16. Functions");
			printf("\n17. Function(Types of Functions)");
			printf("\n18. Recursion");
			printf("\n19. Recursion(Types of Recursion)");
			printf("\n20.  Pointers ");
			printf("\n21.  Chains of Pointers");
			printf("\n22.  Pointer Arrays");
			printf("\n23.  Pointer Strings");
			printf("\n24.  Pointer Functions");
			printf("\n25.  Structures");
			printf("\n26.  Structure Variables");
		}
			{
				printf("\n------------------------------------Process-------------------------------------\n");
				printf("\n\n\nEnter a Variable to Proceed(Integer) : ");
				scanf("%d",&v0);
				printf("\n");
			}
				switch(v0)	{
					case	1	:	{
										printf("\n\n\n------------------------------------IF ELSE-------------------------------------\n\n\n");
										printf("\nAn if statement can be followed by an optional else statement, which executes when the Boolean expression is false.");
										printf("\n\nSyntax");
										printf("\nThe syntax of an if...else statement in C programming language is - ");
										printf("\n\n\n	if(boolean_expression)");
										printf("\n		{");
										printf("\n			//statement 1 will execute if true*/");
										printf("\n		}");
										printf("\n	else ");
										printf("\n		{");
										printf("\n			/*statement 2 will execute if false*/");
										printf("\n		}");
										printf("\n\n\nIf the Boolean expression evaluates to true, then the if block will be executed,otherwise, the else block will be executed.");
										printf("\n\n\nC programming language assumes any non-zero and non-null values as true, and if it is either zero or null, then it is assumed as false valueue.");
										printf("\n\n\n--------------------------------------------------------------------------------");
										printf("\n\n\nPress Enter to Proceed Further ");
										getch();
										printf("\n\n\n--------------------------------------------------------------------------------\n\n\n");
										printf("\nAnswer This as -");
										printf("\n1. Yes");
										printf("\n2. No");
										printf("\n\n\nAre you studying C Programming ?");
										printf("\nEnter to Proceed : ");
										scanf("%d",&v1);
											{
												if(v1==1)
													{
														printf("\n\nWell You will Do Great in C Programming,%s !(KEEP STUDYING)",y0);
													}
												else
													{
														printf("\n\nWell You Can Do Great in C Programming,%s !(TRY TO STUDY MORE)",y0);
													}
											}
										printf("\n\n\n--------------------------------------------------------------------------------");	
									printf("\n\n\nPress Enter to Proceed Further ");
									getch();
									}
								
					case	2	:	{
										printf("\n\n\n--------------------------------IF ELSE LADDER----------------------------------\n\n\n");
										printf("\nThe if else ladder statement in C programming language is used to test set of ");
										printf("\nconditions in sequence. An if condition is tested only when all previous if ");
										printf("\nif-else ladder is false. If any of the conditional expression evaluates to ");
										printf("\ntrue, then conditions it will execute the corresponding code block and exits ");
										printf("\nwhole if-else ladder.");
										printf("\n\n\nSyntax of if else ladder statement :- ");
										printf("\n\n\n\n\n	if(condition_expression_One)");
										printf("\n		{");
										printf("\n			//statement1;");
										printf("\n		}");
										printf("\n	else if(condition_expression_Two)");
										printf("\n		{");
										printf("\n			//statement2;");
										printf("\n		}");
										printf("\n	else");
										printf("\n		{");
										printf("\n			//statement3;");
										printf("\n		}");
										printf("\n\n\n--------------------------------------------------------------------------------");
										printf("\n\n\nPress Enter to Proceed Further ");
										getch();
										printf("\n\n\n--------------------------------------------------------------------------------\n\n\n");
										printf("\nEnter to Proceed : ");
										printf("\n1. Male");
										printf("\n2. Female");
										printf("\n3. Others");
										printf("\n4. Don't wanna Disclose to Public");
										printf("\n\n\n");
										printf("Enter Your Gender : ");
										scanf("%d",&v2);
											if(v2==1)
												{
													printf("\nYou are Learning fast Mr. %s",y0);
												}
											else if(v2==2)
												{
													printf("\nYou are Learning fast Miss. %s",y0);
												}
											else if(v2==3)
												{
													printf("\nYou are Learning fast %s",y0);
												}
											else if(v2==4)
												{
													printf("\nYou are Learning fast %s",y0);
												}
											else
												{
													printf("\nInvalid !");
												}
										printf("\n\n\n--------------------------------------------------------------------------------");
										printf("\n\n\nPress Enter to Proceed Further ");
										getch();
									}
					case	3	:	{
										printf("\n\n\n------------------------------------SWITCH-------------------------------------\n\n\n");
										printf("\nA switch statement allows a variable to be tested for equality against a list");
										printf("\n of values. Each value is called a case, and the variable being switched on ");
										printf("\nis checked for each switch case.");
										printf("\n\n\n\n\nThe syntax for a switch statement in C programming language is as follows -");
										printf("\n\n\nswitch(expression)");
										printf("\n	{");
										printf("\n		case constant-expression  :");
										printf("\n				statement(s);");
										printf("\n				break;");
										printf("\n		case constant-expression  :");
										printf("\n				statement(s);");
										printf("\n				break;");
										printf("\n	// you can have any number of case statements");
										printf("\n		default : //(Optional)");
										printf("\n				statement(s);");
										printf("\n				break;");
										printf("\n	}");
										printf("\n\n\n--------------------------------------------------------------------------------");
										printf("\n\n\nPress Enter to Proceed Further ");
										getch();
										printf("\n\n\n--------------------------------------------------------------------------------\n\n\n");
										printf("\nThe following rules apply to a switch statement -");
										printf("\n\n\n\n\nThe expression used in a switch statement must have an integral or enumerated");
										printf("\ntype, or be of a class type in which the class has a single conversion ");
										printf("\nfunction to an integral or enumerated type.");
										printf("\n\n\nYou can have any number of case statements within a switch. Each case is ");
										printf("\nfollowed by the value to be compared to and a colon.");
										printf("\n\n\nThe constant-expression for a case must be the same data type as the variable in");
										printf("\nthe switch, and it must be a constant or a literal.");
										printf("\n\n\nWhen the variable being switched on is equal to a case, the statements following");
										printf("\nthat case will execute until a break statement is reached.");
										printf("\n\n\nWhen a break statement is reached,the switch terminates, and the flow of control ");
										printf("\njumps to the next line following the switch statement.");
										printf("\n\n\nNot every case needs to contain a break. If no break appears,the flow of control");
										printf("\nwill fall through to subsequent cases until a break is reached.");
										printf("\n\n\nA switch statement can have an optional default case, which must appear at the ");
										printf("\nend of the switch. The default case can be used for performing a task when none ");
										printf("\nof the cases is true. No break is needed in the default case.");
										printf("\n\n\n--------------------------------------------------------------------------------");
										printf("\n\n\nPress Enter to Proceed Further ");
										getch();
										printf("\n\n\n--------------------------------------------------------------------------------\n\n\n");
										printf("\nEnter to proceed :-");
										printf("\n1. Middle School");
										printf("\n2. High School");
										printf("\n3. Under Graduate");
										printf("\n4. Post Graduate");
										printf("\n\n\n\n\nWhat level of Education are doing : ");
										scanf("%d",&v3);
											switch(v3)
												{
													case	1	:	{
																		printf("So You are in your Middle School days and trying to learn C Programming,thats 	Impressive,%s !",y0);
																		break;
																	}
													case	2	:	{
																		printf("So You are in your High School days and trying to learn C Programming,thats 	Admirable,%s !",y0);
																		break;
																	}
													case	3	:	{
																		printf("So You are in your Under Graduate days and trying to learn C Programming,thats 	Fine,%s !",y0);
																		break;
																	}
													case	4	:	{
																		printf("So You are in your Post Graduate days and trying to learn C Programming,thats	Alright,%s !",y0);
																		break;
																	}
													default		:	{
																		printf("Invalid !");
																		break;
																	}
												}
										printf("\n\n\n--------------------------------------------------------------------------------");
										printf("\n\n\nPress Enter to Proceed Further ");
										getch();
										printf("\n\n\n--------------------------------------------------------------------------------\n\n\n");
									}
					case	4	:	{
										
									}
							}
	printf("\n\n\n\n\n\n\n\n\n\n\nMade by Tejeshwar Pradhan(TMP10)");
	return 0;
}
