#include<stdio.h>
main()
{
	int n,c=0,a,r=0,i;
	printf("Enter any number : ");
	scanf("%d",&n);
	printf("\nPrime Numbers : \n");
	a=n;
		while(a>0)
			{
				r=a%10;
				for(i=1;i<=r;i++)	
					{
						if(r%i==0)
							c++;
					}
				if(c==2)
					printf("\nPrime %d",r);
				else
					printf("\nNot Prime %d",r);
				c=0;
				a=a/10;
			}
}
