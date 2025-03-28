#include<stdio.h> 
int main()
{
    int i,j,n,sum = 0;
    printf("Enter any number to print perfect number up to: ");
    scanf("%d", &n);
    printf("\nAll Perfect numbers between 1 to %d:\n", n);
    for(i=1; i<=n; i++)
    {
        sum = 0;
        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d is Perfect Number\n", i);
        }
    }
    return 0;
} 
