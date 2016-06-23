#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i,j,n,k=0,h[256]={0};
    scanf("%s",s);
    n=strlen(s);
   for(j=0;j<n;j++)
     h[s[j]]++;
    for(i=0;i<n;i++)
    {
        
        if(h[s[i]]>1)
        {
            h[s[i]]=0;
        }
        else if(h[s[i]]==1)
        printf("%c",s[i]);
    }
      
   
    return 0;
}
