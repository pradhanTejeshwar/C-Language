#include<stdio.h>
#include<conio.h>
#define max 5

int q[10],front=0,rear=1;

void main()
{
	int ch;
	void insert();
	void delet();
	void display();
	//clrscr();
	
	printf("\nQUEUE OPERATIONS :-");
	printf("\n 1. Insert \n 2. Delete \n 3. Display \n 4. Exit");
	
	while(1)
	{
		printf("\nEnter your Choice : ");
		scanf("%d",&ch);
		switch(ch)
			{
				case 1 :
					{
						insert();
						break;
					}
				case 2 :
					{
						delet();
						break;
					}
				case 3 :
					{
						display();
						break;
					}
				case 4 :
					{
						printf("\n ----------End Point---------- ");
						break;
						//exit();
					}
				default :
					{
						printf("\nINVALID OPERATION / OPTION");
						break;
					}
			}
	}
}

void insert()
{
	int x;
	if(rear==max-1)
		printf("\n\tQUEUE OVERFLOW");
	else
		{
			printf("\n\t Enter the Element to Insert : ");
			scanf("%d",&x);
			q[++rear]=x;
		}
}

void delet()
{
	int a;
	if((front==0)&&(rear==-1))
		{
			printf("\n\tQUEUE UNDERFLOW");
			getch();
			//exit();
		}
	a=q[front++];
	printf("\n\t\tDeleted Element is %d",a);
	if(front>rear)
		{
			front=0;
			rear=-1;
		}
}

void display()
{
	int i;
	if((front==0)&&(rear==-1))
		{
			printf("\n\tQUEUE UNDERFLOW");
			getch();
			//exit();
		}
	for(i=front;i<=rear;i++)
		{
			printf("\t\t\t%d",q[i]);
		}
	printf("\n");
	getch();
}
