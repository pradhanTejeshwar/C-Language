#include<stdio.h>
int main()
{
	int i, j, k;
	for (i=1;i<=3;i++) {
		for (j=i;j<3;j++)
		{
			printf("  ");
		}
		for (k=1;k<(i*2);k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	for (i=2;i>=1;i--)
	{
		for (j=4;j>i;j--)
		{
			printf(" ");
		}
		for (k=1;k<(i*2);k++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
