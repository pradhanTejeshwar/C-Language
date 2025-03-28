#include<stdio.h>
int main()
{
  int i,j,k;
  k=1;
  for(i=1;i<=5;i++)
  {
    for(j=5;j>=i;j--)
    {
        printf("%3d",k++);
    }
    printf("\n");
  }
  return 0;
}
