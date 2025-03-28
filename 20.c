#include<stdio.h>
int GCD(int a,int b);
main()
{
	int x,y;
	printf("Enter two Numbers : ");
	scanf("%d %d",&x,&y);
	printf("\nGCD is : %d",GCD(x,y));
}
int GCD(int a,int b)
	{
		int v,c=0;
			while(b>0)
				{
					c=b;
					b=a%b;
					a=c;
				}
				v=a;
				return v;
	}
