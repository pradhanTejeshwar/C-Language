#include<stdio.h>
#include<conio.h>
#define MAX 100
#define MIN 5

int stack[MAX],choice,n,top,x,i;
void push();
void pop();
void display();

void main()
{
	//clrscr();
	top=-1;
	
	//printf("%d",MIN);
	printf("\nEnter the size of the STACK [MAX=100] : ");
	scanf("%d",&n);
	printf("\n\t 1. PUSH\n\t 2. POP\n\t 3. DISPLAY\n\t 4. EXIT");
	
	do
	{
		printf("\nEnter the Choice : ");
		scanf("%d",&choice);
		switch(choice)
			{
				case 1:
					{
						push();
						break;
					}
				case 2:
					{
						pop();
						break;
					}
				case 3:
					{
						display();
						break;
					}
				case 4:
					{
						printf("\n\tEXIT POINT of the STACK");
						printf("\n----------Please try again later----------");
						break;
					}
				default :
					{
						printf("\n\tPlease Enter a Valid Choice (1/2/3/4)");
					}
			}
			getch();
	}while(choice!=4);
}

void push()
{
	if(top>=n-1)
		{
			printf("\n\tSTACK OVERFLOW");
			getch();
		}
	else
		{
			printf("\n\tEnter a value to be Pushed : ");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
}

void pop()
{
	if(top<=-1)
		{
			printf("\n\tSTACK UNDERFLOW");
			getch();
		}
	else
		{
			printf("\n\tThe Popped Element is %d",stack[top]);
			top--;
		}
}

void display()
{
	if(top>=0)
		{
			printf("\n\tThe elements in the STACK \n\t");
			for(i=top;i>=0;i--)
				{
					printf("\n\t%d",stack[i]);
				}
			printf("\n\tPress Next Choice to Continue");
		}
	else
		{
			printf("\n\tThe STACK is empty");
		}
}
