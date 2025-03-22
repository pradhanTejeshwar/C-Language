#include<stdio.h>
main()
{
	int i,r,Rn=0,a,n;
	printf("Enter a Number to reverse it : \n");
	scanf("%d",&n);
	a=n;
	while(a>0)
	{
		r=a%10;
		a=a/10;
		Rn=Rn*10+r;
	}
	printf("%d",Rn);	
}
