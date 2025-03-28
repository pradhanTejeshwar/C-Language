#include<stdio.h>
main()
{
	int a=5,*p;
	p=&a;
	printf("\n%d",a);
	printf("\n%d",&a);
	printf("\n%d",p);
	printf("\n%d",&p);
	printf("\n%d",*p);
	printf("\n%u",a);
	printf("\n%d",sizeof(p));
}
