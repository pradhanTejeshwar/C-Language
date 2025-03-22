#include<stdio.h>
#include<conio.h>
#define MAX 100

int stack[MAX],choice,n,top,x,i;

void push();
void pop();
void display();

void main()
{
	int top=0;
	printf("Enter the size of the stack : ");
	scanf("%d",&n);
	printf("\n 1. PUSH \n 2. POP \n 3. DISPLAY \n 4. EXIT");
	
	do{
		printf("\nEnter your Choice : ");
		scanf("%d",&choice);
		switch(choice)
			{
				case 1 : {
					push();
					break;
				}
				case 2 : {
					pop();
					break;
				}
				case 3 :{
					display();
					break;
				}
				case 4 : {
					printf("\n\tEXITING");
					break;
				}
				default : {
					printf("\nPlease Enter a Valid Choice !");
					break;
				}
			}
	}while(choice!=4);
	getch();
}

void push()
{
	if(top>=n)
		printf("\nOVERFLOW");
	else
		{
			printf("\nENter the value to Push : ");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
}

void pop()
{
	if(top<=0)
		printf("\nUNDERFLOW");
	else
		{
			printf("\nPopped Element is %d",stack[top]);
			top--;
		}
}

void display()
{
	for(i=top;i>0;i--)
		printf("\n\t%d",stack[i]);
}
