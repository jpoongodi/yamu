#include <stdio.h>

int main()
{
    char s[100];
    int i,n,h[26]={0};
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
     h[s[i]-97]++;
    for(i=0;i<n;i++)
    {
        if(h[s[i]-97]>0)
        {
            printf("%c%d",s[i],h[s[i]-97]);
            h[s[i]-97]=0;
        }
    }
    return 0;
}
