#include <stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int i,h[26]={0},n;
    n=strlen(s);
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        h[s[i]-97]++;
    }
    for(i=0;i<n;i++)
    {
        if(h[s[i]-97]!=0)
        {
            if(s[i]!='a')
            printf("%c",s[i]-1);
            else
            {
                if(h[s[i]-97]!=-1)
        
                    printf("z");
                else
                    printf("a");
            }
            h[s[i]-97]=-1;
        }
        else
        printf("%c",s[i]);
    }
    return 0;
}
