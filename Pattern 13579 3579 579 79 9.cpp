#include <stdio.h>
main()
{
  int i,j;
  for(i=1;i<=9;i+=2)
  {
    for(j=i;j<=9;j+=2)
    {
      printf("%d",j);
    }
    printf("\n");
  }
}
