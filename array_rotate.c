#include <stdio.h>
#include <string.h>

int main()
{
    int i,k,n,h[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&h[i]);
    scanf("%d",&k);
    for(i=k;i<n;i++)
     printf("%d ",h[i]);
    for(i=0;i<k;i++)
     printf("%d ",h[i]);
      
   
    return 0;
}
