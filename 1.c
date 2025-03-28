#include<stdio.h>
main()
{
	int t1,t2,t3,a,b,c;
	printf("Enter the value for A , B & C , respectively : ");
	scanf("%d%d%d",&a,&b,&c);
	t1=a;
	t2=b;
	t3=c;
	a=b=c=0;
		{
			if(t1>t2 && t1>t3)
				c=t1;
			if(t2>t1 && t2>t3)
				c=t2;
			if(t3>t1 && t3>t2)
				c=t3;
		}
			{
				if(t1<t2 && t1<t3)
					a=t1;
				if(t2<t1 && t2<t3)
					a=t2;
				if(t3<t1 && t3<t2)
					a=t3;
			}
				{
					if(a==t1 || c==t1)
						t1=0;
					if(a==t2 || c==t2)
						t2=0;
					if(a==t3 || c==t3)
						t3=0;
				}
					{
						if(t1>0)
							b=t1;
						if(t2>0)
							b=t2;
						if(t3>0)
							b=t3;
					}
		printf("\nA is equal to : %d",a);
		printf("\nB is equal to : %d",b);
		printf("\nC is equal to : %d",c);
}
