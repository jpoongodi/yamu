#include <stdio.h>
#include <math.h>
int main()
{
    int i,n,j,p=1;
    scanf("%d %d",&i,&n);
    for(j=1;j<=n;j++)
    p=p*i;
    printf("%d",p);
    return 0;
}
