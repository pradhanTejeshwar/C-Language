#include <stdio.h>
void main()
{
    float cel,far;
    char n;
    printf("Enter 'C' for Celsius and 'F' for Fahrenheit : ");
    scanf("%c",&n);
	    if(n=='c'||n=='C')
			{
				printf("Enter the temperature in Celsius : ");
        		scanf("%f",&cel);
	        	far=((cel*9)/5)+32;
 				printf("\nTemperature in Fahrenheit : %f ",far);
        	}
        else if(n=='f'||n=='F')
	        {
    	    	printf("\n\nEnter the temperature in Fahrenheit :");
        		scanf("%f",&far);
        		cel=((far-32)*5)/9;
	        	printf("\nTemperature in Celsius : %f ",cel);
    	    }
    	else
			printf("Not in the range for (C/F)");
}
