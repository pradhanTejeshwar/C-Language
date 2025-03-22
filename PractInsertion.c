#include<stdio.h>
void main()
{
	int a[10],n,i;
	int c,j,k,flag=0;
	int beg,end,mid;
	int t;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the Elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	/*	
	printf("\n\n\nInsertion\n\n\n")	;
	
	printf("\nEnter the location to Insert : ");
	scanf("%d",&k);
	printf("\nEnter the Element to Insert : ");
	scanf("%d",&c);
		
	j=n;
	while(j>=k)
		{
			a[j+1]=a[j];
			j-=1;
		}
	a[k]=c;
	n+=1;
	
	printf("\nNew Array : ");
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	getch();

	printf("\n\n\nDeletion\n\n\n")	;
	
	printf("\nEnter the location to Delete : ");
	scanf("%d",&k);
	
	for(i=k;i<=n-1;i++)
		a[i]=a[i+1];
	n-=1;
	
	printf("\nNew Array : ");
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	getch();
	
	
	printf("\n\n\nLinear Search\n\n\n")	;
	
	printf("\nEnter the item to Search : ");
	scanf("%d",&c);
	
	for(i=1;i<=n;i++)
		{
			if(a[i]==c)
				{
					flag=i;
					break;
				}
			else
				flag=0;
		}
	if(flag!=0)
		printf("\nElement is in : %d",c);
	else
		printf("\nElement not Found !");
	
	printf("\n\nNew Array : ");
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	getch();
	
	printf("\n\n\nBinary Search\n\n\n")	;
	
	printf("\nEnter the item to Search : ");
	scanf("%d",&c);
	
	beg=1;end=n;mid=((beg+end)/2);
	while(beg<=end && a[mid]!=c)
		{
			if(c<a[mid])
				end=mid-1;
			else
				beg=mid+1;
			mid=(beg+end)/2;
		}
	
	if(a[mid]==c)
		printf("\nElement is in : %d",mid);
	else
		printf("\nElement not Found !");
	
	printf("\n\nNew Array : ");
	for(i=1;i<=n;i++)
	printf("%d ",a[i]);
	getch();
	*/
	printf("\n\n\nBubble Sort\n\n\n")	;
	k=0;c=0;
	for(k=1;k<=n-1;k++)
		{
			c=1;
			while(c<=n-k)
				{
					if(a[c]>a[c+1])
						{
							t=a[c];
							a[c]=a[c+1];
							a[c+1]=a[c];
						}
					c=c+1;
				}
		}
	
	printf("\n\nSorted Array : ");
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
	getch();
	//*/
}
