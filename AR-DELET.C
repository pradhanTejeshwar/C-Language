#include<stdio.h>
void main()
{
 int a[10],i,j,n,T,k;
 printf("\nEnter the length of the Array : ");
 scanf("%d",&n);
 printf("\nEnter %d elements in the Array : ",n);
 for(i=1;i<=n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("\nThe elements in the Array are : ");
 for(i=1;i<=n;i++)
  {
   printf("%d ",a[i]);
  }
 printf("\nEnter the Location of the element to be Deleted : ");
 scanf("%d",&k);
 printf("\nEnter the Element to be Deleted : ");
 scanf("%d",&T);

 T=a[k];
 for(j=k;j<=n-1;j++)
  {
   a[j]=a[j+1];
  }
 n-=1;

 printf("\nThe new elements in the Array are : ");
 for(i=1;i<=n;i++)
  {
   printf("%d ",a[i]);
  }

 getch();
 clrscr();

}