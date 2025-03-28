#include<stdio.h>
main()
{
	int n,r=1,i=0,m=0;
	printf("Enter a Number : ");
	scanf("%d",&n);
	while(n>0)
		{
			r=n%10;
			if(r%2!=0)
				r=0;
			m=m+r*pow(10,i++);
			n=n/10;
		}
		printf("The number is : %d",m);
}
