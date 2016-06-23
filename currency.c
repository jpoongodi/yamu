#include <stdio.h>

int main()
{
    int n,t,sum=0,i=0,a[5]={500,100,50,10,1};
    scanf("%d",&n);
    t=n;
    if(t>0)
    {
    while(t)
    {
        sum=sum + t/a[i];
        t=t%a[i];
        i++;
    }
    printf("%d",sum);
    }
    else
    printf("invalid input");
    return 0;
}
