#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,S=0;
	printf("Enter the nth Value : ");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				S=S+pow(-1,i-1)*pow(i,i);
			}
	printf("\nSum of the Series : %d",S);
}
