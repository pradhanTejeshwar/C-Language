#include<stdio.h>
void main()
{
	int a[10],n,i,c;
	int t,k;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	for(k=2;k<=n;k++)
		{
			t=a[k];
			c=k-1;
			while(t<a[c])
				{
					a[c+1]=a[c];
					c-=1;
				}
			a[c]=t;
		}
	
	printf("\n\nPress Enter to view the elements of the Array : ");
	getch();
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getch();
}
