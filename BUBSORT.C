#include<stdio.h>
void main()
{
 int a[10],n,i,k,t,ptr;

 printf("\nEnter the Length of the Array : ");
 scanf("%d",&n);
 printf("\nEnter the Elements in the Array : ");
  for(i=1;i<=n;i++)
   {
    scanf("%d",&a[i]);
   }

 printf("\nThe Elements in the Array are : ");
  for(i=1;i<=n;i++)
   {
    printf("%d ",a[i]);
   }


 printf("\nSorted Order of the Array : ");
 for(k=1;k<=(n-1);k++)
  {
   ptr=1;
    while(ptr<=(n-k))
     {
      if(a[ptr]>a[ptr+1])
       {
	t=a[ptr];
	a[ptr]=a[ptr+1];
	a[ptr+1]=t;
       }
      ptr=ptr+1;
     }
  }

   for(i=1;i<=n;i++)
    {
     printf("%d ",a[i]);
    }
  getch();
  clrscr();
}