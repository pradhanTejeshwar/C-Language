#include<stdio.h>

void main()
{
	int a[10],n;
	printf("\tEnter the size of the Array : ");
	scanf("%d",&n);
	
	//Scan Elements in the Array
	int i;
	for(i=1;i<=n;i++)
		{
			printf("\nEnter Element %d",i);
			scanf("%d",&a[i]);		
		}
	
	//Insertion Sort Algorithm
	InsertionALGO(a[],n);
	
	//Print Elements in the Array
	PrintArray(a[],n);
}

void InsertionALGO(int a[],int n)
	{
		int i,j,key;
		for(i=2;i<=n;i++)
			{
				for(j>=0 && a[j]>key)
					{
						
					}
			}	
	}
	
void PrintArray(int a[],int n)
	{
		int i;
		for(i=1;i<n;i++)
			printf("\n%d ",a[i]);
	}
