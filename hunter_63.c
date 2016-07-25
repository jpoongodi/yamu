#include <stdio.h>
int main()
{
    
    int n,a[100],i=0,max=0,k,j;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        max=0;
        for(j=i+1;j<n;j++)
        {
        if(a[j]>max)
            max=a[j];
        }
        printf("%d ",max);
    }
   
    return 0;
}
