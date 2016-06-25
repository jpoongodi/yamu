#include <stdio.h>

int main()
{
    int n,i,r,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        
        if(r%2!=0)
        sum=sum+r;
        t=t/10;
        
    }
   
    if(sum%2!=0)
    printf("%d",1);
    else
    printf("-1");
    return 0;
}
