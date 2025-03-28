#include<stdio.h>
struct emp
{
	int empid;
	int sal;
	char name;
};
main()
{
	struct emp e[100];
	int n,i,id,c=0;
	printf("Enter the no. of employees\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			printf("\nEnter empid for Emp %d\n",i);
			scanf("%d",&e[i].empid);
			printf("\nEnter the Salary for Emp %d\n",i);
			scanf("%d",&e[i].sal);
			printf("\nEnter the name for Emp %d\n",i);
			gets(e[i].name);
		}
	printf("\nEnter id\n");
	scanf("%d",&id);
	for(i=1;i<=n;i++)
		{
			if(e[i].empid==id)
				{
					puts(e[i].name);
					printf("%d",e[i].sal);
					c=1;
					break;
				}
		}
	if(c==0)
		printf("Not Found");
}
