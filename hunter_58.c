#include <stdio.h>
int main()
{
    
    int n,a[100],i=0,temp=0,k,j;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(abs(a[i]-a[j])==k&&i!=j)
            printf("%d %d\n",a[i],a[j]);
        }
    }
   
    return 0;
}
