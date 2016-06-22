#include <stdio.h>
int bin(int a)
{
    int t,r,c=0;
    t=a;
    while(t)
    {
        r=t%2;
        if(r==1)
        c++;
        t=t/2;
    }
    return c;
}
int main()
{
    int l,r,i,j,flag=0,k,count;
    scanf("%d %d",&l,&r);
   
   
    for(i=l+1;i<r;i++)
    {
     count=0;   
    j=i;flag=0;
    for(k=2;k<=j/2;k++)
    {
        if(i%k==0)
         flag=1;
    }
    if(flag!=1)
    count=bin(i);
    if(count==1)
    printf("%d ",i);
  
    }
     return 0; 
}
