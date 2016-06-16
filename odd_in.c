#include <stdio.h>

int main()
{
    int l,r,i;
    scanf("%d %d",&l,&r);
   
   
    for(i=l+1;i<r;i++)
    {
        if(i%2!=0)
         printf("%d ",i);
    }
    
}
