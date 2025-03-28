#include<stdio.h>
int LCM(int a,int b);
main()
{
	int x,y;
	printf("Enter two Numbers : ");
	scanf("%d%d",&x,&y);
	printf("LCM is : %d",LCM(x,y));
}
int LCM(int a,int b)
	{
		int t=a;
			while(b>0)
				{
					if(t%a==0 && t%b==0)
						break;
							t++;
				}
			return t;
	}
