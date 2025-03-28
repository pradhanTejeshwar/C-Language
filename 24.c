#include<stdio.h>
main()
{
	int a[99],n,i,j,t=0;
	printf("Enter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array :-\n\n");
		for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
		printf("\nThe elements of the array is : ");
			for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
		for(i=0;i<n;i++)
			{
				for(j=i+1;j<n;j++)
					{
						if(a[i]>a[j])
							{
								t=a[i];
								a[i]=a[j];
								a[j]=t;
							}
					}
			}
		printf("\n\nThe Array Elements after Selection Sorting are :-\n\n");
			for(i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
}
