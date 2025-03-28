#include<stdio.h>
main()
{
	int *p,a=10;
	float *q,b=5.6;
	char *r,c='x';
	p=&b;
	p=&a;
	q=&b;
	r=&c;
	printf("%d",*p);
	printf("\n%f",*q);
	printf("\n%c",*r);
	printf("\n%d",p);
	printf("\n%d",q);
	printf("\n%d",r);
	printf("\n%d",sizeof(p));
	printf("\n%d",sizeof(q));
	printf("\n%d",sizeof(r));
	printf("\n%d",sizeof(*p));
	printf("\n%d",sizeof(*q));
	printf("\n%d",sizeof(*r));
}
