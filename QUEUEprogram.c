#include<stdio.h>
#include<conio.h>
#define max 5

int q[10],front=0,rear=1;
int ch;
void insert();
void delet();
void display();

void main()
{
	//clrscr();
	
	printf("\n\t----------Queue Operations----------");
	printf("\n\t1. Insert\n\t2. Delete\n\t3. Display\n\t4. Exit\n");
	
	while(1)
		{
			printf("\n\tEnter your Choice : ");
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
							printf("\n\tEnd of Operations");
							printf("\n----------Please Try Again Later----------\n");
							break;
						}
					default :
						{
							printf("\n\tINVALID OPTION/OPERATION\n");
						}
				}
		}
}

void insert()
{
	int x;
	if(rear==max-1)
		{
			printf("\n\tQUEUE OVERFLOW");
		}
	else
		{
			printf("\n\tEnter the Element to Insert : ");
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
	printf("\nDeleted Element is : %d\n",a);
	
	if(front>rear)
		{
			front=0;
			rear=1;
		}
}

void display()
{
	int i;
	if((front==0)&&(rear=-1))
		{
			printf("\n\tQUEUE UNDERFLOW\n");
			getch();
			//exit();
		}
	for(i=front;i<rear;i++)
		{
			printf("\n\t%d",q[i]);
		}
	printf("\n");
}
