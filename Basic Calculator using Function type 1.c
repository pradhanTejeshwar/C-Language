#include<stdio.h>
int add(int,int);
int min(int,int);
int pro(int,int);
int mod(int,int);
int div(int,int);
void main()
{
	int x,y,z;
	printf("Enter Two Numbers : ");
	scanf("%d %d",&x,&y);
	z=add(x,y);
	printf("Addition : %d \n",z);
	z=min(x,y);
	printf("Subtraction : %d \n",z);
	z=pro(x,y);
	printf("Multiplication : %d \n",z);
	z=mod(x,y);
	printf("Modulus : %d \n",z);
	z=div(x,y);
	printf("Division : %d \n",z);
}
	int add(int a,int b)
	{
		return a+b;
	}
	int min(int a,int b)
	{
		if(a>b)
		return a-b;
		else
		return b-a;
	}
	int pro(int a,int b)
	{
		return a*b;
	}
	int mod(int a,int b)
	{
		if(a>b)
		return a%b;
		else
		return b%a;
	}
	int div(int a,int b)
	{
		if(a>b)
		return a/b;
		else
		return b/a;
	}
