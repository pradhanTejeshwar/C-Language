#include<stdio.h>
void main()
{
	int a[10],n,i;
	int min,loc,j,k,t;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(k=1;k<=n-1;k++)
		{
			min=a[k];
			loc=k;
			for(j=k+1;j<=n;j++)
				{
					if(min>a[j])
						{
							min=a[j];
							loc=j;
						}
				}
			t=a[k];
			a[k]=a[loc];
			a[loc]=t;
		}
	
	printf("\n\nPress Enter to view the elements of the Array : ");
	getch();
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getch();
}
