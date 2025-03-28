#include<stdio.h>
void main()
{
	int n,s=0,r,a,i=0;
	printf("Enter the Number : ");
	scanf("%d",&n);
		while(i<=9)
			{
				a=n;
					while(a>0)
						{
							r=a%10;
								if(r==i)
									s=s*10+r;
							a=a/10;
						}
				i++;
			}
		printf("Ascending Order : %d",s);
}

