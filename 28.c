#include<stdio.h>
main()
{
 	int m,n,p,q,c,d,k,s=0,a[10][10],b[10][10],z[10][10];
  	printf("Enter the number of rows and columns of first matrix\n");
  	scanf("%d%d",&m,&n);
  	printf("\nEnter the elements of first Matrix\n");
		for(c=0;c<m;c++)
    		{
				for(d=0;d<n;d++)
      				{
						scanf("%d",&a[c][d]);
					}
			}
	printf("\nThe elements of first matrix\n");
		for(c=0;c<m;c++)
    		{
				for(d=0;d<n;d++)
      				{
						printf("%d ",a[c][d]);
					}
				printf("\n");
			}
	printf("\nEnter the number of rows and columns of second matrix\n");
  	scanf("%d%d",&p,&q);
  		if(n!=p)
    		printf("\nMatrices with entered orders can't be multiplied\n");
  		else
			{
    			printf("\nEnter the elements of second matrix\n");
				    for(c=0;c<p;c++)
      					{
							for(d=0;d<q;d++)
       							{
								   	scanf("%d",&b[c][d]);
								}
						}
				printf("\nThe elements of second matrix\n");
				    for(c=0;c<p;c++)
      					{
							for(d=0;d<q;d++)
       							{
								   	printf("%d ",b[c][d]);
								}
							printf("\n");
						}
    	for(c=0;c<m;c++)
			{
      			for(d=0;d<q;d++)
				  	{
        				for(k=0;k<p;k++)
							{
          						s=s+a[c][k]*b[k][d];
        					}
        				z[c][d]=s;
        				s=0;
      				}
		    }
    printf("\nProduct of entered matrices:-\n");
    for(c=0;c<m;c++)
		{
      		for(d=0;d<q;d++)
      			{
        			printf("%d ",z[c][d]);
        		}
      		printf("\n");
	    }
  			}
}
