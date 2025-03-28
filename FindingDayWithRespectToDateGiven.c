#include<stdio.h>
#include<conio.h>
main()
{
 int dd,mm,yy,i,a,a1,a2,b,b1,b2,d=0,sm=0;
 clrscr();
 printf("enter date(DD/MM/YYYY):");
 scanf("%d%d%d",&dd,&mm,&yy);
 if(mm>12 || dd>31)
   printf("you entered wrong date");
 else
   {
    yy=yy-1;
    a=yy%400;
    b=yy/400;
    a1=a%100;
    b1=a/100;
    a2=a1/4;
    b2=a1-a2;
    for(i=1;i<mm;i++)
     {
      if(i==2)
       {
                if((yy+1)%4==0)
                 d=d+29;
                else
                 d=d+28;
       }
      else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
       d=d+31;
      else
       d=d+30;
     }
    sm= b*0+b1*5+a2*2+b2*1+d+dd;
    sm=sm%7;
    printf("according to entered date day is ");
    switch(sm)
     {
      case 0: printf("sunday"); break;
      case 1: printf("monday"); break;
      case 2: printf("tuesday"); break;
      case 3: printf("wednesday"); break;
      case 4: printf("thursday"); break;
      case 5: printf("friday"); break;
      case 6: printf("saturday"); break;
     }
   }
}
