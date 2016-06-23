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
    for(i=n-1;i>=0;i--)
    {
        
        if(h[s[i]]!=0)
        {
             printf("%c",s[i]);
            h[s[i]]=0;
        }
        
       
    }
      
   
    return 0;
}
