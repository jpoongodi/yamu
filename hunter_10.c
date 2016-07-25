#include <stdio.h>
#include <string.h>

int main()
{
    int a[100],b[100],i,j,k,n,flag=0,m,count=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(j=0;j<m;j++)
        scanf("%d",&b[j]);
  
    j=0;k=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            count++;
        }
        
    }
   
    if(count<m)
        printf("NO");
    else
       printf("YES");
    return 0;
}
