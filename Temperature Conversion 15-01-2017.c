//C=(F-32)X5/9;
#include<stdio.h>
main()
{
	int C,F;
	char n;
	printf("Choose \n'C' for Conversion to Celsius");
	printf("\n'F' for Conversion to Fahrenheit	:\n");
	scanf("%c",&n);
	if(n=='C' || n=='c')
		{
			printf("Enter the Temperature in Fahrenheit : ");
			scanf("%d",&F);
			C=((F-32)*5)/9;
			printf("\nCelsius Conversion = %d",C);
		}
	if(n=='F' || n=='f')
		{
			printf("Enter the Temperature in Celsius : ");
			scanf("%d",&C);
			F=((C*9)/5)+32;
			printf("\nFahrenheit Conversion = %d",F);
		}
}
