#include <stdio.h>

int main()
{
    int i,j,x=0,k=0;
    scanf("%d", &k);
    int r=k;
    for(i=0;i<=k;i++)
    {
        for(j=0;j<2;j++)
        {
            for(x=0;x<=r;x++)
            printf("*");
        printf(" ");
        }
        printf("\n");
        r--;   
    }
   
    return 0;
}
