#include <stdio.h>

int main()
{
    int n,temp,i=0,j,r[20],seed=1;
    scanf("%d",&n);
    temp=n;
    while(temp)
    {
        r[i++]=temp%10;
       
        temp/=10;
    }

    for(j=0;j<i;j++)
    {
        seed=seed*r[j];
    }
    printf("%d\n",seed*n);
    return 0;
}
