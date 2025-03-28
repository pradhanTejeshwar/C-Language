#include<stdio.h>
#include<conio.h>
void main()
{

 int n,i,temp,k,a[100],ptr;
 printf("\nEnter the length of the Array : ");
 scanf("%d",&n);
 printf("\nEnter the elements in the Array : ");
  for(i=1;i<=n;i++)
   scanf("%d",&a[i]);
 for(k=2;k<=n;k++)
  {
   temp=a[k];
   ptr=k-1;
    while(k>0 && temp>a[ptr])
     {
      {
       a[ptr+1]=a[ptr];
       ptr=ptr-1;
      }
       a[ptr]=temp;
       printf("\nvalue : %d ",a[ptr]);
     }
     printf("value of temp%d\n",temp);
   }
  printf("\nSorted Array : ");
  for(i=1;i<=n;i++)
   printf("%d ",a[i]);
  getch();
  clrscr();
}
