#include <stdio.h>
#include <string.h>
int main()
{
    
    char str[30]=="hi how r u";
    int c=1,flag=0,n,i;
    
    n=strlen(str);
    for(i=0;i<n;i++)
    {
            if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
            flag=1;
            if(flag==1)
            {
            ++c;
            flag=0;
            }
    }
    printf("%d",c);
    return 0;
}
