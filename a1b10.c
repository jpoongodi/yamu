#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i,j,n,k=0;
    scanf("%s",s);
    n=strlen(s);
   for(j=1;j<n;j++)
   {
      
    if((s[j]>='0'&&s[j]<='9')&&((s[j+1]>='a'&&s[j+1]<='z')||(s[j+1]>='A'&&s[j+1]<='Z'))||j==n-1)
    {
        k=s[j]-48;
        for(i=0;i<k;i++)
        {
            printf("%c",s[j-1]);
        }
    
    }
    else if((s[j]>='0'&&s[j]<='9')&&(s[j+1]>='0'&&s[j+1]<='9'))
    {
        k=(s[j] -48 )*10 + s[j+1] - 48;
        for(i=0;i<k;i++)
        printf("%c",s[j-1]);
       j=j+2;
   }
   }
    return 0;
}
