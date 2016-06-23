#include <stdio.h>

int main()
{
    int n,t,sum=0,i=0,a[10],s;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&s);
    t=s;
    i=n-1;
    while(t)
    {
        sum=sum + t/a[i];
        t=t%a[i];
        i--;
    }
    printf("%d",sum);
    
    return 0;
}
