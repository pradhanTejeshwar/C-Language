#include<stdio.h>
main()
{
	int a,b,c,t1,t2,t3;
	printf("Enter the Value for A , B , C , respectively :\n");
	scanf("%d%d%d",&a,&b,&c);
	t1=a;
	t2=b;
	t3=c;
	a=b=c=0;
		{
			if(t1>t2 && t1>t3)
				c=t1;
			if(t2>t1 && t2>t3)
				c=t1;
			if(t3>t1 && t3>t2)
				c=t3;
		}
			{
				if(t1<t2 && t1<t3)
					a=t1;
				if(t2<t1 && t2<t3)
					a=t2;
				if(t3<t1 && t3<t1)
					a=t3;
			}
				{
					if(a==t1 || c==t1)
						t1=0;
					if(a==t2 || c==t2)
						t2=0;
					if(a==t3 || c==t3)
						t2=0;
				}
					{
						if(t1>0)
							b=t1; 
						if(t2>0)
							b=t2;
						if(t3>0)
							b=t3;
					}
	printf("\n\n\n\n");
	printf("\nA = %d",a);
	printf("\nB = %d",b);
	printf("\nC = %d",c);
}
