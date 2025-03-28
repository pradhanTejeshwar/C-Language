#include<stdio.h>
main()
{
	int i,j,v,s=0;
	for(i=1;i<=10;i++)
		{
			v=1;
			for(j=1;j<=i;j++)
				{
					v=v*j;
				}
			s=s+v;
		}
	printf("Sum : %d",s);
}
