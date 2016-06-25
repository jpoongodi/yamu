#include <stdio.h>

int main()
{
    int i,j,k,m,n,a[100],t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&a[i]);
    scanf("%d",&k);
    for(i=0;i<=n-k;i=i+k)
    {
        j=i;
        m=i+k-1;
         while(j<m)
        {
            t=a[j];
            a[j]=a[m];
            a[m]=t;
            j++;
            m--;
        }
        
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    return 0;
}
