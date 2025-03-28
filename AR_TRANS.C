#include<stdio.h>
void main()
{
 int Ar[10],i,n;
 clrscr();
 printf("\nEnter the length of an array : ");
 scanf("%d",&n);
 printf("\nEnter the %d Elements in the Array : ",n);
 for(i=1;i<=n;i++)
  scanf("%d",&Ar[i]);
 printf("\nThe Elements entered in the Array are : ");
 for(i=1;i<=n;i++)
  printf("%d ",Ar[i]);
 printf("\n---------------------");
 printf("\nThe Transversed Array : ");
 for(i=n;i>=1;i--)
  printf("%d ",&Ar[i]);
 getch();
}