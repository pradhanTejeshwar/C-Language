#include<stdio.h>
void main()
{
	int a[10],i,j,n,k;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter the location to delete the Element : ");
	scanf("%d",&k);
	
	for(i=k;i<=n-1;i++)
		a[i]=a[i+1];
	n=n-1;
	
	printf("\nPress Enter to view the elements of the Array : ");
	getch();
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getch();
}
