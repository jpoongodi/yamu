#include <stdio.h>

int main()
{
   int n,i;
   scanf("%d",&n);
   for(i=1;i<=16;i++)
   {
      printf("%d*%d=%d\n",i,n,i*n);
   }
   
    return 0;
}
