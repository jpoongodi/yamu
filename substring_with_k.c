#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,k,n,m;
    char s[100];
    scanf("%s",s);
    scanf("%d",&k);
    n=strlen(s);
    for(i=1;i<=n-k+1;i++)
    {
        printf("%c",s[0]);
        m=i;
        for(j=0;j<k-1;j++)
         printf("%c",s[m++]);
        printf("\n");
    }

    return 0;
}
