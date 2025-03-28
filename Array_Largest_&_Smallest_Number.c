#include<stdio.h>
int main()
{
	int a[5],i,L,S;
	printf("Enter 5 values \n");
	for(i=0;i<5;i++)
		{
			scanf("\n%d",&a[i]);
		}
	printf("\n-----------------------------------------\n");
	L=a[0];
	for(i=1;i<5;i++)
		{
			if(L<a[i])
				L=a[i];
		}
	printf("\n The Largest Number in the Array is : %d",L);
	printf("\n-----------------------------------------\n");
	S=a[0];
	for(i=1;i<5;i++)
		{
			if(S>a[i])
				S=a[i];
		}
	printf("\n The Smallest Number in the Array is : %d",S);
	return 0;
}
