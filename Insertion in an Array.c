#include<stdio.h>
void main()
{
	int a[10],i,j,n,k,c;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter the location to insert an Element : ");
	scanf("%d",&k);
	printf("\nEnter the element : ");
	scanf("%d",&c);
	
	j=n;
	while(j>=k)
	 {
	 	a[j+1]=a[j];
	 	j=j-1;
	 }
	a[k]=c;
	n=n+1;
	printf("\nPress Enter to view the elements of the Array : ");
	getch();
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getch();
}
