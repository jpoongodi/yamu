#include <stdio.h>

int main()
{
    int n,i,r,count=0,t,sum=0;
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        sum=sum+(r*r*r);
        t=t/10;
        count++;
    }
    if(sum==n)
     printf("yes");
    else
    printf("no");
    return 0;
}
