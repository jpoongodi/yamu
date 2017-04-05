#include <stdio.h>

int main()
{
    int i,l,a=0,k=0;
    char s[100],x[100];
    gets(s);
    l = strlen(s);
    for(i=l-1;i>=0;i--)
    {
        if(s[i] == ' ' || i == 0)
        {
           for(a=k;a>=0;a--)
           printf("%c",x[a]);
           k=0; 
           printf(" ");
        }
        else
        {
            x[k] = s[i];
            k++;
            if(i ==1)
            x[k] = s[0];
        }
    }
   
    return 0;
}
