#include <stdio.h>
#include <string.h>
int main()
{
    char s[20],t;
    int i,n,j;
    scanf("%s",s);
    n=strlen(s);
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        j--;
    }
   printf("%s",s);
    return 0;
}
