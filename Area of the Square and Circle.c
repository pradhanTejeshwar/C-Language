#include<stdio.h>
main()
{
int s,A;
float r,Ar;
float Pi=3.14;
printf("Enter the side of the square to find it's Area");
scanf("%d",&s);
A = s * s;
printf("The Area of the square is = %d",A);
printf("Enter the radius of the Circle to get it's Area");
scanf("%f",&r);
Ar = Pi * r * r;
printf("The Area of the Circle is = %f",Ar);
}
