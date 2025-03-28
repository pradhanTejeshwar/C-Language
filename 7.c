#include<stdio.h>
main()
{
	float c=1,s=0,i,j;
		for(i=1;i<=10;i++)
			{
				for(j=1;j<=i;j++)
					{
						c=c*j;
					}
				s=s+(i/c);
				c=1;
			}
		printf("\nSum : %f",s);
}
