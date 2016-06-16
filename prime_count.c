#include <stdio.h>

int main()
{
    int l,r,i,j,flag=0,k,count=0;
    scanf("%d %d",&l,&r);
   
   
    for(i=l+1;i<r;i++)
    {
        
    j=i;flag=0;
    for(k=2;k<=j/2;k++)
    {
        if(i%k==0)
         flag=1;
    }
    if(flag!=1)
    count++;
    
    
  
    }
    printf("%d ",count);
     return 0; 
}
