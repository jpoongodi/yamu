#include <stdio.h>
#include <string.h>

int main()
{
    int i,k,n,h[100],r[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     scanf("%d",&h[i]);
    }
    for(i=0;i<n;i++)
    {
     scanf("%d",&r[i]);
    }
    for(i=0;i<n;i++)
    {
        if(h[i]==r[0])
        k=i;
    }
     
     printf("%d ",k);
      
   
    return 0;
}
