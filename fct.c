#include <stdio.h>

int main()
{
   int n,i,f=1;
   scanf("%d",&n);
   for(i=n;i>0;i--)
   {
       f=f*i;
   }
   printf("%d",f);
    return 0;
}
