#include<stdio.h>

void main()
{
	int n,array[99],c,d,position,swap;
	
	printf("\nEnter the number of Elements : ");
	scanf("%d",&n);
	printf("\nEnter %d Integers :- \n",n);
	
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
		
	for(c=0;c<n;c++)
		{
			position=c;
			
			for(d=c+1;d<n;d++)
				{
					if(array[position]>array[d])
						position=d;
				}
			if(position!=c)
				{
					swap=array[c];
					array[c]=array[position];
					array[position]=swap;
				}
		}
	printf("\n\t\tSorted list in Ascending Order : \n");
	
	for(c=0;c<n;c++)
		printf("\n\t%d",array[c]);
}
