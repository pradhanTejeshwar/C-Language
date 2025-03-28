#include<stdio.h>
main()
{
	int a[5],i;
	printf("Enter 5 Characters ! \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
		{
			if(a[i]=="a" || a[i]=="A")
				printf("%d ",a[i]);
			else if(a[i]=="e" || a[i]=="E")
				printf("%d ",a[i]);
			else if(a[i]=="i" || a[i]=="I")
				printf("%d ",a[i]);
			else if(a[i]=="o" || a[i]=="O")
				printf("%d ",a[i]);
			else if(a[i]=="u" || a[i]=="U")
				printf("%d ",a[i]);
			else
				printf("  ");
			
		}
}
