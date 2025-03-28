#include<stdio.h>
void main()
{
 int a[10],i,k,l,n,t;
 int min,j;

 printf("\nEnter the length of the Array : ");
 scanf("%d",&n);
 printf("\nEnter the Elements in the Array : ");
  for(i=1;i<=n;i++)
   {
    scanf("%d",&a[i]);
   }
 printf("\nElements in the Array before Sorting : ");
  for(i=1;i<=n;i++)
   {
    printf("%d ",a[i]);
   }
 printf("\nEnter the K-th Element to start Sorting : ");
 scanf("%d",&k);

 printf("\nElements in the Array after Sorting : ");

 min=a[i];
 l=k;
  for(j=k;j<=n;j++)
   {
    if(min>a[j])
     {
      min=a[j];
      l=j;
     }
   }

 t=a[k];
 a[k]=a[l];
 a[l]=t;

  for(i=1;i<=n;i++);
   {
    printf("%d ",a[i]);
   }

 getch();
 clrscr();
}