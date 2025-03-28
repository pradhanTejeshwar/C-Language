#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,n;
	int i;
	int fibo(int n);
	printf("Enter the limit:\n");
 	scanf("%d",&n);
   	i=fibo(n);
   	a=0;
   	b=1;
   	printf("%d %d ",a,b);
 	printf(" The Fibonacci Series is %d ",i);
 	getch();
}
	int fibo(int n)
		{
 			int a,b,c,i;
   			i=1;
   			a=0;
   			b=1;
   			while(i<=n)
			   {
      				c=a+b;
      				a=b;
      				b=c;
      				i++;
      				printf("\n%d",c);
			   }
 	return(c);
}
