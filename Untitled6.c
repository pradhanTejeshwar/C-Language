#include<stdio.h>
main()
{
	int i,r,R=0,a,n;
	printf("Enter the Number to reverse it !");
	scanf("%d",&n);
	a=n;
		for(i=1;i<=n;i++)
			{
				r=n%10;
				R=R*10+r;
				a=a/10;
			}
		printf("%d ",R);
}
