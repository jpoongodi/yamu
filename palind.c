#include <stdio.h>

int main()
{
    int n,i,r,count=0,t,k=0,j,a[10]={0};
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        r=t%10;
        a[i++]=r;
        t=t/10;
        count++;
    }
    j=count-1;
    for(i=0;i<count/2;i++)
    {
        if(a[i]==a[j])
        {
            
             k++;
             
        }
       j--;
    }
    
    if(k==count/2)
    printf("yes");
    else
    printf("no");
    return 0;
}
