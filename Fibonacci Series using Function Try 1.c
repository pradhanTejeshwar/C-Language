#include<stdio.h>
#include<conio.h>
void main()
	{
		void fib(int,int);
		int n,i;
		clrscr();
		printf("Enter no. of elements ");
		scanf("%d",&n);
		printf("  0  1");
		fib(i,n);
		getch();
	}
		void fib(int m,int n)
			{
				int a=0,b=1;
				int c;
					for(m=1;m<=n-2;m++)
						{
							c=a+b;
							a=b;
							b=c;
							printf("%3d",c);
						}
}
