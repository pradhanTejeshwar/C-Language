#include<stdio.h>

void main()
{
	int a[10],n,i,item,c;
	int beg,end,mid,loc;
	
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	printf("\nEnter the element to be Searched : ");
	scanf("%d",&item);
	
	
	
	beg=1;
	end=n;
	mid=((beg+end)/2);
	
	while(beg<=end && a[mid]!=item)
		{
			if(item<a[mid])
				end=mid-1;
			else
			 	beg=mid+1;
			mid=((beg+end)/2);
		}
		
	if(a[mid]==item)
		{
			loc=mid;
			printf("\nELEMENT FOUND = %d Position",mid);
		}	
	else
		{
			//loc="NULL";
			printf("\nELEMENT NOT FOUND ");
		}
}
