#include<stdio.h>
void Squ(int);
void Cir(int);
void main()
{
	int a,A,r,Ar;
	printf("To Find the Area of a Square\nTo Find the Area of a Circle\nEnter it's side and radius : ");
	scanf("%d%d\n",&a,&r);
	Squ(a);
	printf("Area of the Square is : %d \n",A);
	Cir(r);
	printf("Area of the Circle is : %d \n",Ar);
}
void Squ(int x)
	{	
		return x*x;
	}
void Cir(int y)
	{	
		float Pi=3.14;
		return Pi*y*y;
	}
