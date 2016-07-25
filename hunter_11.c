#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],ch;
    int i,j,l,r,len;
    gets(s);
    len=strlen(s);
    i=0;j=0;l=0;
    for(i=0;i<=len;i++)
    {
         if(s[i]==' '||s[i]=='\0')
        {
            r=i-1;
            while(l<r)
            {
                ch=s[l];
                s[l]=s[r];
                s[r]=ch;
            l++;
            r--;
            }
                i++;
                l=i;
        
        }
    }
    l=0;r=len-1;
    while(l<r)
    {
                ch=s[l];
                s[l++]=s[r];
                s[r--]=ch;
    }
    for(i=0;i<len;i++)
        printf("%c",s[i]);
    return 0;
}
