#include<stdio.h>

void swap(int *xp,int *yp)
{
	int temp;
	*xp=*yp;
	*yp=temp;
}

void SelectionSort(int arr[],int n)
{
	int i,j,min_idx;
	
	//One by one move boundary of unsorted subarray
	for(i=0;i<n;i++)
		{
			//Find the minimum Element in the unsorted array
			min_idx=i;
			
			for(j=(i+1);j<n;j++)
				{
					if(arr[j]<arr[min_idx])
						min_idx=j;
				}
				
			//Swap the found minimum element with the first element
			swap(&arr[min_idx],&arr[i]);
		}
}

void PrintArray(int arr[],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("\t\t%d ",arr[i]);
	printf("\n");
}

void main()
{
	int arr[]={64,25,12,22,11};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	SelectionSort(arr,n);
	printf("\n The Sorted form of the Array is :- \n");
	PrintArray(arr,n);
	getch();
}
