#include <stdio.h>

int main()
{
    int n,i,r,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(t)
    {
        r=t%10;
        sum=sum+(r*r);
        t=t/10;
       
    }
    printf("%d",sum);
    return 0;
}
