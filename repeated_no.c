#include <stdio.h>
#include<math.h>
int main()
{
    int a[100],i,n,h[100]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        h[a[i]]++;
    }
    for(i=0;i<n;i++)
    {
        if(h[a[i]]>1)
        {
            printf("%d ",a[i]);
            h[a[i]]=0;
        }
    }
    
    return 0;
}
