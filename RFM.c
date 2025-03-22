#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E0.0001
	
void rf(float,float);
float fun(float);

void main()
{
	float l,u;
	printf("Enter Lower Limit : ");
	scanf("%f",&l);
	printf("\nEnter Upper Limit : ");
	scanf("%f",&u);
	rf(l,u);
	getch();
}

void rf(float a,float b)
	{
		float L=fun(a),R=fun(b),n;
		int c,i;
		
		if((L*R)>0)
			{
				printf("\nRoot does not lie in the given interval");
				return;
			}
		else
			{
				printf("\nEnter total no. of Iteration : ");
				scanf("%d",&i);
				
				for(c=0;c<i;c++)
					{
						do
						{
							n=((b*L)-(a*R))/(L-R);
							printf("\nAt %d iteration root is : %f & function is : %f ",c,n,fun(n));
							
							if((fun(n)*fun(a))<0)
								{
									b=n;
									R=fun(n);
								}
							else
								{
									a=n;
									L=fun(n);
								}
						}	while(fabs(fun(n))<=E);
					}
			}
		
	}
	
float fun(float k)
	{
		float val=pow(k,2)+log(k)-12;
		return val;
	}
