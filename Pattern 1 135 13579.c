#include <stdio.h>
int main()
{
  int i,j,k;
  for(i=1;i<=9;i+=2)
  {
    for(j=1;j<=i+1;j+=2)
    {
      for(k=j;k<=j;k++)
	  {
	  	printf("%d",k);
	  }
    }
    printf("\n");
  }
}
