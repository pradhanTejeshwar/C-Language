#include<stdio.h>
void main()
{
 int a[10],n,k,T,i,j;
 printf("\Enter the length of the array : ");
 scanf("%d",&n);
 printf("\nEnter the elements in the array : ");
 for(i=1;i<=n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("\nThe elements in the array are : ");
 for(i=1;i<=n;i++)
  {
   printf("%d ",a[i]);
  }
 printf("\nEnter the Location to Insert : ");
 scanf("%d",&k);
 printf("\nEnter the element to be Inserted in the Array : ");
 scanf("%d",&T);

 j=n;
 while(j>=k)
  {
   a[j+1]=a[j];
   j-=1;
  }
  a[k]=T;
  n+=1;

  printf("\nThe new  elements in the array are : ");
 for(i=1;i<=n;i++)
  {
   printf("%d ",a[i]);
  }

  getch();
  clrscr();
}