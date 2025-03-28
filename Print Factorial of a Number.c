#include<stdio.h>
main()
{
	int i,f=1;
	int n;
	printf("Enter a Number ! \n");
	scanf("%d",&n);
		while(i<=n)
			{
				f=f*i;
				i=i+1;
			}
	printf("%d",f);
}
