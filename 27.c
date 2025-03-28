#include<stdio.h>
main()
{
	int a[93][93],m,n,i,j;
	printf("Enter the Matrix form (E.g, 3 3) : ");
	scanf("%d %d",&m,&n);
		if(m!=n)
			{	
				printf("\n\n\nNo Transpose can be Created !");
				printf("\nExample :-\n");
			}
	printf("\nEnter elements for a %dx%d matrix :-\n",m,n);
	for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					scanf("%d",&a[i][j]);
				}
		}
	printf("\nThe elements of the matrix before Transpose :-\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					printf("%d ",a[i][j]);
				}
				printf("\n");
		}
	printf("\nThe Transpose of the entered elements of the matrix is :-\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				{
					printf("%d ",a[j][i]);
				}
				printf("\n");
		}
}
