#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j,k=0,t=0;
	printf("Enter the Elements of 2D Array : ");
		for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
					{
						scanf("%d",&a[i][j]);
					}
			}
		printf("\nThe Elements of 2D Array :-\n");
			for(i=0;i<3;i++)
				{	
					for(j=0;j<3;j++)
						{
							printf("%d ",a[i][j]);
						}
					printf("\n");
				}b[0]=0;
				for(i=0;i<3;i++)
					{
						for(j=0;j<3;j++)
							{
								b[k]=a[i][k];
								k++;
							}
					}
				for(i=0;i<8;i++)
					{
						for(j=0;j<8-i;j++)
							{
								if(b[i]>b[i+1])
									{
										t=b[i];
										b[i]=b[i+1];
										b[i+1]=t;
									}
							}
					}
				k=0;
					for(i=0;i<3;i++)
						{
							for(j=0;j<3;j++)
								{
									a[i][j]=b[k];
									k++;
								}
						}
				printf("\nAscending Order :-\n");
					for(i=0;i<3;i++)
						{
							for(j=0;j<3;j++)
								{
									printf("%d ",a[i][j]);
								}
							printf("\n");
						}
}
