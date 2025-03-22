#include<stdio.h>

void main()
{
	int a[10],n,i,item,c;
	
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array : ");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	int d,swap;
	
	for(i=1;i<n-1;i++)
		{
			d=i;
			while(d>0 && a[d]<a[d-1])
				{
					swap=a[d];
					a[d]=a[d-1];
					a[d-1]=swap;
					
					d--;
				}
		}
	
	for(i=0;i<n;i++)
		printf("\n%d",a[i]);
}
