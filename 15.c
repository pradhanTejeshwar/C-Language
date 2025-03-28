#include<stdio.h>
main()
{
	int a,L=1,t,n,F,x=0,y=1;
	printf("Enter the Number : ");
	scanf("%d",&n);
	t=n;
		while(n>9)
			{
				a=n%10;
				n=n/10;
			}
		L=t%10;
		F=n;
		n=t;
			while(n>0)
				{
					a=n%10;
						if(a==F)
							x=x+(L*y);
						else if(a==L)
							x=x+(F*y);
						else
							x=x+(a*y);
					y=y*10;
					n=n/10;
				}
			printf("\nAfter Replacing First and Last Digit : %d ",x);
}
