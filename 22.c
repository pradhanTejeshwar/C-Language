#include<stdio.h>
main()
{
	int a[10],i,c=0,j;
	printf("Enter 10 elements in the array : ");
	for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Prime Numbers : ");
		for(i=0;i<10;i++)
			{
				c=0;
				for(j=2;j<a[i];j++)
					{
						if(a[i]%j==0)
							{
	    	                   c=1;
    	    	               break;
                			}
					}
					if(c==0)
			           {
            		    	printf("%d ",a[i]);
			           }
			}
}
