#include <stdio.h>
#include<math.h>
int main()
{
    int a[1000],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       
    }
    for(i=0;i<n;i++)
    {
        if(i==a[i])
        printf("%d ",a[i]);
    }
    
    return 0;
}
