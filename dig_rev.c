#include <stdio.h>
#include <string.h>
int main()
{
   
    int n,i,r,count=0,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
       printf("%d",r);
        t=t/10;
        
    }
    
   
    return 0;
}
