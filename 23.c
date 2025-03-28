#include<stdio.h>
main()
{
	int a[10],i,j=0,c=0,n,b=0,l=0,x;
	printf("Enter an Array  : ");
		for(i=0;i<10;i++)
			{
				scanf("%d",&a[i]);
			}
    printf("\nThe Array is : ");
		for(i=0;i<10;i++)
			{
				printf("%d ",a[i]);
			}
    		for(i=0;i<10;i++)
			    {
				   	c=0;
				    x=a[i];
					    for(b=1;b<x;b++)
						{
							if(x%b==0)
								c=c+b;
					    }
						    if(c==x)
						    	{
						    		if(x>l)
										l=x;
									    j++;
								}
				}
	if(j==0)
		{
			printf("\nNone\n");
		}
	else
		{
			printf("\nLargest perfect Number : %d",l);
		}
}
