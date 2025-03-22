#include<stdio.h>
void main()
{
	int n,i,f;
	printf("\nENter the Number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		f=f*i;
	printf("%d",f);
	
	getch();
}
