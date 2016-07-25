#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],ch;
    int i,j,l,r,len;
    gets(s);
    len=strlen(s);
    printf("%d\n",len);
    i=0;j=0;l=0;
    for(i=0;i<=len;i++)
    {
        
        if(s[i]==' '||s[i]=='\0')
        {
            
            r=i-1;
            
            while(l<r)
            {
            if(s[r]>='A'&&s[r]<='Z'&&s[l]>='a'&&s[l]<='z')
                {
                s[r]+=32;
                s[l]-=32;
                }
            else if(s[r]>='a'&&s[r]<='z'&&s[l]>='A'&&s[l]<='Z')
                {
                    s[r]-=32;
                    s[l]+=32;
                }
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
    for(i=0;i<len;i++)
        printf("%c",s[i]);
    return 0;
}
