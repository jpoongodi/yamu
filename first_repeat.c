
#include <stdio.h>
#include<math.h>
int main()
{
    int a[1000],i,n,h[1000]={0},flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        h[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(h[a[i]]>1&&flag!=1)
        {
            printf("%d ",a[i]);
           flag=1;
        }
    }
    
    return 0;
}
