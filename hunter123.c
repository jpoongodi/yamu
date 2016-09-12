#include  <stdio.h>
#include<math.h>
#include<string.h>
int main(void)
{
    int n,sum=0,i=0,h[26]={0},h1[26]={0};
    char s[100];
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]>='a'&&s[i]<='z')
            h[s[i]-97]++;
        else
            h1[s[i]-65]++;
    }
    for(i=0;i<n;i++)
    {
        if(h[s[i]-97]==1)
        {
            printf("%c",s[i]);
        }
         if(h1[s[i]-65]==1)
            printf("%c",s[i]);
    }   
    
    return 0;
}
