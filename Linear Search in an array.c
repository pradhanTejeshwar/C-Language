#include<stdio.h>
void main()
{
	int a[10],i,n,item,c;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	
	printf("\nEnter the Element to search : ");
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
		printf("\nThe Location of the Element is : %d",i);
	else
		printf("\nThe element could not be Found !");
		
	
/*	
	printf("\n\nPress Enter to view the elements of the Array : ");
	getch();
	for(i=1;i<=n;i++)
		printf("%d ",a[i]);
*/
	getch();
}

