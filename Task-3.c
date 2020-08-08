#include <stdio.h>
#include <string.h>

void stringprint(char[100] , int);
  int main() 
  {
        //User Input
        char string[100];
        int flag;

        printf("Enter your input string: ");
        fgets(string, 100, stdin);
        string[strlen(string) - 1] = '\0';
        printf("Enter '0' for Even and '1' for Odd characters to display : ");
        scanf("%d",&flag);
        
        stringprint(string,flag);
     
        //Print Even Characters
    /*    stringprint("FEEDBYME",0);    */
        //Print Odd Characters
    /*    stringprint("FEEDBYME",1);    */
  }

void stringprint(char string[100], int flag) 
    { 
        char even[100], odd[100], i, j, k;
        
        i = j = k = 0;
        
        while (string[i] != '\0') {
                if (i % 2 == 0) {
                        odd[j++] = string[i];
                } else {
                        even[k++] = string[i];
                }
                i++;
        }

        odd[j] = even[k] = '\0';

        if(flag == 1)
            printf("%s\n", odd);
        else
            printf("%s\n", even);
    }
