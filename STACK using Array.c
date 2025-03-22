#include<stdio.h>
#include<conio.h>
#define MAX 100

int stack[MAX],choice,n,top,x,i;

void push();
void pop();
void display();

void main()
{
	top=-1;
	
	printf("\n Enter the size of STACK[MAX=100] : ");
	scanf("%d",&n);	scanf("%d",&n);
	
	printf("\n\t 1. PUSH \n\t 2. POP \n\t 3. DISPLAY \n\t 4. EXIT");
	
	do
	{
		printf("\n\t\t Enter your Choice : ");
		scanf("&d",&choice);
		switch(choice)
			{
				case 1 : 
					{
						push();
						break;
					}
				case 2 :
					{
						pop();
						break;
					}
				case 3 :
					{
						display();
						break;
					}
				case 4 :
					{
						printf("\n\t\t ---------- EXIT POINT ----------");
						break;
					}
				default :
					{
						printf("\n\t\t\t Please Enter a Valid Choice (1/2/3/4)");
					}
			}
		getch();
	}while(choice!=4);
}

void push()
{
	if(top>n-1)
		{
			printf("\n\t\t\t STACK OVERFLOW !!! ");
		}
	else
		{
			printf("\n\t\t\t Enter the value to be Pushed : ");
			scanf("&d",&x);
			top++;
			stack[top]=x;
		}
}
	
void pop()
{		
	if(top<=-1)
		{
			printf("\n\t\t\t STACK UNDERFLOW");
			getch();
		}
	else
		{
			printf("\n\t\t\t The Popped ELement is %d",stack[top]);
			top--;
		}
}
	
void display()
{
	if(top>=0)
		{
			printf("\n\t\t\t The Elements of the STACK \n");
			for(i=top;i>=0;i--)
				printf("\n%d",stack[i]);
			printf("\n\n\t\t\t PLEASE Enter the next Choice !");
		}
	else
		{
			printf("\n The Stack is empty !");
		}
}
