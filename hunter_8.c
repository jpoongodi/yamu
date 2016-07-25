#include <stdio.h>
#include <string.h>

int main()
{
    int a[100],i,j,k,n,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
        for(k=0;k<n;k++)
        {
        if((a[i]*a[i])+(a[j]*a[j])==a[k]*a[k]&&k!=j&&k!=i)
        {
            printf("%d %d %d",a[i],a[j],a[k]);
            flag=1;
            break;
        }
        }
        }
        
    }
    if(flag!=1)
        printf("-1");
    return 0;
}
