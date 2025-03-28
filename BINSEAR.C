#include<stdio.h>
void main()
{
 int a[10],i,n,T,l,beg,mid,end;
 printf("\nEnter the length of the Array : ");
 scanf("%d",&n);
 printf("\nEnter %d Elements in the Array : ",n);
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

 beg=1;
 end=n;
 mid=((beg+end)/2);
 while((beg<=end) && (a[mid]!=T))
  {
   if(T<a[mid])
    {
     end=mid-1;
    }
   else
    {
     beg=mid+1;
    }
   mid=((beg+end)/2);
  }
  if(a[mid]==T)
   {
    l=mid;
    printf("\nLocation of the ELEMENT is : %d",l);
   }
  else
   {
    printf("ELEMENT not Found !");
   }
  getch();
  clrscr();
}
