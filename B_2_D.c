#include<stdio.h>
#include<conio.h>
main()
{
	int a,n1,n2,n3[10];
	int dn=0,i=0,r;
	int bn=0,r1,i1=1,s=1;
	printf("Convert to :-");
	printf("\n1 : Decimal");
	printf("\n2 : Binary");
	printf("\n\n\nEnter your choice as (1/2) : ");
	scanf("%d",&a);
		if(a==1)
			{
				printf("Enter a Binary Number : ");
				scanf("%d",&n1);
				printf("\nBinary --> Decimal : ");
					while(n1!=0)
						{
							r=n1%10;
							n1=n1/10;
							dn=dn+r*pow(2,i);
							++i;
						}
					printf("%d",dn);
			}
		else if(a==2)
			{
				printf("\nEnter a Decimal Number : ");
				scanf("%d",&n2);
				printf("\nDecimal --> Binary : ");
					while(n2!=0)
						{
							r1=n2%2;
							printf("%d ",bn);
							//scanf("%d",&n3[j]);
							//j++;
							n2=n2/2;
							bn=bn+r1*i1;
							i1=i1*10;
						}
			}
		else
			{
				printf("Input Error !");
				printf("\nPlease Try Again !");
			}	
}
