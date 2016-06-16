#include <stdio.h>

int main()
{
    int n,i,r,count=0,t;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        
        t=t/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
