#include <stdio.h>
#include <string.h>

int main()
{
    int i,delete,n,h[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
     scanf("%d",&h[i]);
    scanf("%d",&delete);
    for(i=0;i<n;i++)
    {
        if(h[i]!=delete)
        {
             printf("%d ",h[i]);
        }
    }
      
   
    return 0;
}
