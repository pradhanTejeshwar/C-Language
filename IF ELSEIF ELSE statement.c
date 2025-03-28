#include<stdio.h>
#include<conio.h>
main()
{
	int m;
	printf("   Enter your MARKS out of 100   ");
	scanf("%d",&m);
		if (m >= 90 && m < 100)
			printf("  Your Grade is O  ");		
		else if (m >= 80 && m < 90)
			printf("  Your Grade is E  ");
		else if (m >= 70 && m < 80)
			printf("  Your Grade is A  ");
		else if (m >= 60 && m < 70)
			printf("  Your Grade is B  ");		
		else if (m >= 50 && m < 60)
			printf("  Your Grade is C  ");		
		else if (m >= 40 && m < 50)
			printf("  Your Grade is D  ");		
		else if (m < 40)
			printf("  Your Grade is F  ");		
}
