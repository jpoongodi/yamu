#include <stdio.h>
#include<math.h>
int main()
{
    char s[100],t;
    int i,j,n;
    scanf("%s",s);
    n=strlen(s);
    j=n-1;
    for(i=0;i<n/2;i++)
    {
        t=s[i];
        s[i]=s[j];
        s[j]=t;
        j--;
    }
    printf("%s\n",s);
    for(i=0;i<n;i++)
    {
        if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')&&(s[i]!='A'&&s[i]!='E'&&s[i]!='I'&&s[i]!='O'&&s[i]!='U'))
        printf("%c",s[i]); 
        
    }
    return 0;
}
