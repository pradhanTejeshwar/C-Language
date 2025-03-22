#include<stdio.h>

void main()
{
	int n,array[99],c,d,t;
	
	printf("\nEnter the number of Elements : ");
	scanf("%d",&n);
	printf("\nEnter %d Integers :- \n",n);
	
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
		
	for(c=1;c<=n-1;c++)
		{
			d=c;
			
			while(d>0 && array[d]<array[d-1])
				{
					t=array[d];
					array[d]=array[d-1];
					array[d-1]=t;
					
					d--;
				}
		}
	printf("\n\t\tSorted list in Ascending Order : \n");
	
	for(c=0;c<=n-1;c++)
		printf("\n\t%d",array[c]);
}
