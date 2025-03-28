#include <stdio.h>
int main()
{
	int m,n,p,q,c,d,k,sum=0;
  	int a[10][10],b[10][10],x[10][10];
  	printf("Enter the number of rows and columns of first matrix\n");
  	scanf("%d%d",&m,&n);
  	printf("Enter the elements of first matrix\n");
		for(c=0;c<m;c++)
    		{
				for(d=0;d<n;d++)
      				{
						scanf("%d",&a[c][d]);
					}
			}
  	printf("Enter the number of rows and columns of second matrix\n");
  	scanf("%d%d",&p,&q);
  		if(n!=p)
    		printf("Matrices with entered orders can't be multiplied with each other.\n");
  		else
			{
    			printf("Enter the elements of second matrix\n");
    				for(c=0;c<p;c++)
    					{
      						for(d=0;d<q;d++)
        						{
									scanf("%d",&b[c][d]);
								}
						}
    					for(c=0;c<m;c++)
							{
      							for(d=0;d<q;d++)
								  	{
        								for(k=0;k<p;k++)
											{
          										sum=sum+a[c][k]*b[k][d];
        									}
        								x[c][d]=sum;
        								sum = 0;
      								}
    						}
    printf("Product of entered matrices:-\n");
    	for(c=0;c<m;c++)
			{
      			for(d=0;d<q;d++)
      				{
        				printf("%d\t",x[c][d]);
        			}
        	}
    printf("\n");
    		}
}
