#include<stdio.h>
void main()
{
 int a[10],i,T,l,n,c;
 printf("\nEnter the length of the Array : ");
 scanf("%d",&n);
 printf("\nEnter the elements in the Array : ");
 for(i=1;i<=n;i++)
  {
   scanf("%d",&a[i]);
  }
 printf("\nThe Elements in the Array are : ");
 for(i=1;i<=n;i++)
  {
   printf("%d ",a[i]);
  }
 printf("\nEnter the ELEMENT to Search : ");
 scanf("%d",&T);
 for(i=1;i<=n;i++)
  {
   if(T==a[i])
    {
     l=i;
     c=1;
     break;
    }
  }
 if(c==1)
  {
   printf("\nLocation of the ELEMENT is : %d",l);
  }
 else
  {
   printf("\nThe ELEMENT wasn't Found!Try Again");
  }
  getch();
  clrscr();
}