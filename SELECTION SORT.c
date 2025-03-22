#include<stdio.h>

int main()
{
	int array[99],n,c,d,position,swap;
	
	printf("\nEnter the number of Elements : ");
	scanf("%d",&n);
	printf("\n\tEnter %d Integers : ",n);
	
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);
		
	for(c=0;c<(n-1);c++)
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
		
	printf("\n\t\tThe Sorted List in Ascending Order :\n");
	
	
	for(c=0;c<n;c++)
		{
			printf("\t\t%d ",array[c]);
		}
}
