#include<stdio.h>
typedef struct emp
{
	int empid;
	double sal;
	char name;
};
void main()
{
	emp e[100];
	int n,i,id,c=0;
	printf("Enter the no. of the Employee\n");
	scanf("%d",&n);
		for(i=1;i<=n;i++)
			{
				printf("\nEnter the empid for Emp %d \n",i);
				scanf("%d",&e[i].empid);
				printf("\nEnter the salary for Emp %d\n",i);
				scanf("%lf",&e[i].sal);
				printf("\nEnter the name for Emp %d\n",i);
				gets(e[i].name);
			}
		printf("\nEnter the id\n");
		scanf("%d",&id);
			for(i=1;i<=n;i++)
				{
					if(e[i].empid==id)
						{
							puts(e[i].name);
							printf("\nSalary = %lf",e[i].sal);
							c=1;
							break;
						}
				}
			if(c==0)
				printf("\nNot Found !\n");
}
