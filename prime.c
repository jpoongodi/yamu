#include <stdio.h>

int main()
{
    int n,i,j,flag=0;
    scanf("%d",&n);
    j=n;
    for(i=2;i<=j/2;i++)
    {
        if(n%i==0)
         flag=1;
    }
    if(flag!=1)
    printf("yes");
    else
    printf("no");
    return 0;
}
