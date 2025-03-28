#include<stdio.h>
main()
{
	int a[3][3],b[3][3],i,j;
	printf("\n Enter the elements in 1st Matrix : ");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					scanf("%d",&a[i][j]);
				}
		}
	printf("\n Enter the elements in 2nd Matrix : ");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					scanf("%d",&b[i][j]);
				}
		}
	printf("\n Elements of 1st Matrix \n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					printf("%d ",a[i][j]);
				}
			printf("\n");
		}
	printf("\n Enter the elements in 1st Matrix :  \n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					printf("%d ",b[i][j]);
				}
			printf("\n");
		}
	printf("\n Resulted Matrix :  \n");
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
				{
					printf("%d ",(a[i][j]+b[i][j]));
				}
			printf("\n");
		}
}
