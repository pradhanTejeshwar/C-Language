#include<stdio.h>

void main()
{
	int a[10],n,i,item,c;
	
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	printf("\nEnter the element to be Searched : ");
	scanf("%d",&item);
	
	for(i=1;i<=n;i++)
		{
			if(a[i]==item)
				{
					c=i;
					break;
				}
			else
				c=0;
		}
	if(c!=0)
		printf("\nELEMENT FOUND = %d position",);
	else
		printf("\nELEMENT NOT FOUND");
}
