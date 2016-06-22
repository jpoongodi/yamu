#include <stdio.h>
#include<math.h>
int bin(int x)
{
    int t,r,i=1,b=0;
    t=x;
    while(t)
    {
        r=t%2;
        b=b+(r*i);
        t=t/2;
        i=i*10;
    }
   
    return b;
}

int main()
{
    int n,k,b,i;
    scanf("%d",&k);
    n=pow(2,k);
    
    for(i=0;i<n;i++)
    {
        b=bin(i);
        printf("%03d\n",b);
    }
    
    return 0;
}
