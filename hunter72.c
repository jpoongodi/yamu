#include <stdio.h>
#include <string.h>
int main()
{
    char s[100],ch;
    int i,j,l,r,len,flag=0;
    gets(s);
    len=strlen(s);
    i=0;j=0;l=0;
    for(i=0;i<=len;i++)
    {
        
        if(s[i]==' '||s[i]=='\0')
        {
            
            r=i-1;
            if(flag==0)
            {
            while(l<r)
            {
            
                ch=s[l];
                s[l]=s[r];
                s[r]=ch;
            l++;
            r--;
            }   
            flag=1;
            }
            else
            flag=0;
            i++;
            l=i;
        }
       
    }
    for(i=0;i<len;i++)
        printf("%c",s[i]);
    return 0;
}
