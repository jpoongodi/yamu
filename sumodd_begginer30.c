#include <stdio.h>

int main()
{
    int n=15,i=15,j=0;
    printf("\n1-15 sum=%d",n*(n+1)/2);
    for(i=15;i<=45;i++)
    {
        if(i%2!=0)
        j=j+i;
    }
    printf("\n15-45 odd sum=%d",j);
    return 0;
}
