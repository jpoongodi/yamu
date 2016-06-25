#include <stdio.h>
int main()
{
    int i, n, a[100],avg=0,avg2=0,sum1=0, k=1,sum=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(flag!=1&&k!=n)    
    {
    for(i=0;i<k;i++)
    sum=sum+a[i];
    
    for(i=k;i<n;i++)
    sum1=sum1+a[i];
    
    printf("%d %d\n",sum,sum1);
    avg=sum/k;
    avg2=sum1/(n-k);
    
    if(avg==avg2)
    {
     printf("yes");
     flag=1;
    }
    k++;
    sum=0;
    sum1=0;
}
   if(flag==0)
    printf("no");
    return 0;
}
