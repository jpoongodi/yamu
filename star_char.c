#include <stdio.h>
#include <string.h>
int main()
{
    char s[20];
    int i,n,h[26]={0};
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    h[s[i]-97]++;
    for(i=0;i<n;i++)
    {
        if(h[s[i]-97]>1)
        {
        printf("%c*",s[i]);
        h[s[i]-97]=0;
        }
        else
        printf("%c",s[i]);
    }
     return 0; 
}
