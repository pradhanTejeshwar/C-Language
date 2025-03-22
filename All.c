#include<stdio.h>
void main()
{
	int a[10],n,i;
	int c,j,sel,k;
	printf("\nEnter the size of the Array : ");
	scanf("%d",&n);
	printf("\nEnter the Elements in the Array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	printf("\nSelect the Number to perform the Operation : ");
	printf("1	Insertion");
	scanf("%d",&sel);
		switch(sel)
	
	case	1	:	{
						printf("\nEnter the location to Insert : ");
						scanf("%d",&k);
						printf("\nEnter the Element to Insert : ");
						scanf("%d",&c);
						
						j=k;
						while(j>=k)
						{
							a[j+1]=a[j];
							j-=1;
						}
						n+=1;
						printf("\nNew Array : ");
						for(i=1;i<=n;i++)
							printf("%d ",a[i]);
						break;
					}
	case	2	:	{
						printf("\nNew Array : ");
						for(i=1;i<=n;i++)
							printf("%d ",a[i]);
						break;
					}
}

