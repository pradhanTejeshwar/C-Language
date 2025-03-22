#include<stdio.h>

void merge(int [],int,int [],int,int []);

int main()
{
	int a[100],b[100],m,n,c,sorted[200];
	printf("\nInput number of elements in First array :\n");
	scanf("%d",&m);
	
	printf("\n\tInput %d Integers : ",m);
	for(c=0;c<m;c++)
		scanf("%d",&a[c]);
	
	printf("\nInput number of elements in Second array :\n");
	scanf("%d",&n);
	
	printf("\n\tInput %d Integers : ",n);
	for(c=0;c<n;c++)
		{
			scanf("%d",&b[c]);
		}
		
	merge(a,m,b,n,sorted);
	
	printf("\n\t\tThe sorted form of the array is :-\n\t\t\t");
	for(c=0;c<(m+n);c++)
		printf("\t\t%d",sorted[c]);
}

void merge(int a[],int m,int b[],int n,int sorted[])
{
	int i,j,k;
	
	j=k=0;
	
	for(i=0;i<(m+n);)
		{
			if(j<m && k<n)
				{
					if(a[j]<b[k])
						{
							sorted[i]=a[j];
							j++;
						}
					else
						{
							sorted[i]=b[k];
							k++;
						}
					i++;
				}
			else if(j==m)
				{
					for(;i<(m+n);)
						{
							sorted[i]=b[k];
							k++;
							i++;
						}
				}
			else
				{
					for(;i<(m+n);)
						{
							sorted[i]=a[j];
							j++;
							i++;
						}
				}
		}
}
