#include<stdio.h>
int main()
{
    int k,r;
    int i=0,j=1,f;
    int sum = 1;
 	printf("Enter the number range: ");
    scanf("%d",&r);
    	for(k=2;k<r;k++)
		{
        	f=i+j;
         	i=j;
         	j=f;
         	sum = sum + j;
    	}
    printf("Sum of Fibonacci series is: %ld",sum);
    return 0;
}

