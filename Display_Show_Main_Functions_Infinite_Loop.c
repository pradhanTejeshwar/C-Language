#include<stdio.h>
int display();
int show();
int main()
{
	display();
		{
			show();
		}
	show();
		{
			display();
		}
	display();
	show();
}
int display()
	{
		printf("Hi");
		show();
	}
int show()
	{
		printf("Hello");
		display();
	}
