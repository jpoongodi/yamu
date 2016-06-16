#include <stdio.h>

int main()
{
    int n,i,r,count=0,t,sum=0,l,m;
    scanf("%d %d",&l,&m);
    for(i=l+1;i<m;i++)
    {
    t=i;sum=0;
    while(t!=0)
    {
        r=t%10;
        sum=sum+(r*r*r);
        t=t/10;
        
    }
   
    if(sum==i)
     printf("%d ",i);
    }
    return 0;
}
