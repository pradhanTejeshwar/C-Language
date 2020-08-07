/* Task - 3 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
    {
        char str[41];
        char odd[21];
        char even[21];
        char *p = str;
        int i = 0; 
        int j = 0;
        int k = 0;
    
        printf("Enter a string (40 characters maximum): ");
        scanf("%40s" , str);
    
        while (*p) 
            { 
                if (i % 2 == 0)  
                odd[j++] = *p;
                else 
                even[k++] = *p;
                p++;
                i++;
            }
    
        printf("\nThe even string is: %s", even);
        printf("\nThe odd string is: %s", odd);
    
        return 0;
    }