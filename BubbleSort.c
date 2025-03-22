#include<stdio.h>

void main()
{
	int a[10],n,i,item,c;
	
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array : ");
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
		
	int k,ptr,t;
	
	for(k=1;k<=n-1;k++)
		{
			ptr=1;
			while(ptr<=n-k)
				{
					if(a[ptr]>a[ptr+1])
						{
							t=a[ptr];
							a[ptr]=a[ptr+1];
							a[ptr+1]=t;
						}
					ptr++;
				}
		}
		
	for(i=1;i<=n;i++)
		printf("\n%d ",a[i]);
	getch();
}
