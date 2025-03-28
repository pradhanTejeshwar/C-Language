#include<stdio.h>
main()
{
	int n,a,b;
	printf("Enter the values for A & B : ");
	scanf("%d %d",&a,&b);
	printf("\nChoose any of the following Operation :- ");
	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication\n");
	printf("\nSelected operation Number is : ");
	scanf("%d",&n);
		switch(n)
			{
				case 1 :	printf("\n\n(A + B) : %d ",a+b);
								break;
				case 2 :	printf("\n\n(A - B) : %d ",a-b);
								break;
				case 3 :	printf("\n\n(A x B) : %d ",a*b);
								break;
			}
}
