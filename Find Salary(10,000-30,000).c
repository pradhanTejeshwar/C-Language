#include<stdio.h>
#include<conio.h>
main()
{
	int s;
	printf("Enter the Salary");
	scanf("%d",&s);
		switch(s)
			{
				case 0 : s<=10000
					printf("%d",s+((s*10)/100));
						break ;
				case 1 : s<=15000
					printf("%d",s+((s*8)/100));
						break ;
				case 2 : (s<=20000)
					printf("%d",s+((s*5)/100));
						break ;
				case 3 : (s<=30000)
					printf("%d",s+((s*8)/100));
						break ;
				default :
					printf("INVALID INPUT !!! \n");
						break ;
			}
}
