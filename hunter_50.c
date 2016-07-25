#include <stdio.h>
int main()
{
    
    int n,k,i=0,j;
    scanf("%d %d",&n,&k);
    while(n>k)
    {
        n=n-k;
        i++;
    }
    printf("%d",i);
    return 0;
}
