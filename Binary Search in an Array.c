#include<stdio.h>
void main()
{
	int a[10],n,i,item;
	int beg,end,mid,loc;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter the element to Search : ");
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
			mid=(beg+end)/2;
		}
	if(a[mid]==item)
		{
			loc=mid;
			printf("\nLocation of the Array is : %d",loc);
		}
	else
		{
			loc="Null";
			printf("\nElement is not in the Array !");
		}
/*	
	printf("\n\nPress Enter to view the elements of the Array : ");
	getch();
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
*/
	getch();
}

