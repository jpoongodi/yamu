#include <stdio.h>
int main()
{
    
    int n,a[100],i=0,temp=0;
    scanf("%d ",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        temp^=a[i];
        
    }
    printf("%d",temp);
    return 0;
}
