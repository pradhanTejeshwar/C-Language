#include<stdio.h>
main()
{
	int a,i,b=0,c=0,x,y=0,z;
	printf("ent a num : ");
	scanf("%d",&a);
	while(a>0)
	{
		b=a%2;
	   c=(c*10)+b;
			
		a=a/2;
		
	}
	
	while (c>0)
	{
	    x=c%10;
		y=(y*10)+x;
		c=c /10;
	}
	printf("%d",y);
	
}
