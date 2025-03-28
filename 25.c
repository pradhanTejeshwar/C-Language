# include<stdio.h>
main()
{
	int a[99],n,i,j,t=0;
	printf("Enter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the Elements of the Array :-\n\n");
		for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
			}
		printf("\nThe Elements in the Array are : ");
			for(i=0;i<n;i++)
				{
					printf("%d ",a[i]);
				}
		for(i=0;i<n-1;i++)
			{
				for(j=0;j<n-1-i;j++)
					{
						if(a[j]>a[j+1])
							{
								t=a[j];
								a[j]=a[j+1];
								a[j+1]=t;
							}
					}
			}
	printf("\n\nThe Array Elements after Bubble Sorting are :-\n\n");
		for(i=0;i<n;i++)
			{
				printf("%d ",a[i]);
			}
}
