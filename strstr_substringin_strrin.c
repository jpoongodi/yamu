#include <stdio.h>
int i,j,m,n,count=0,pos,value;
char txt[30],pat[30];
int main()
{
    gets(txt);
    gets(pat);
    n=strlen(txt);
    m=strlen(pat);
    search(txt,pat);
    return 0;
}
search(char a[],char b[])
{
    int flag=0;
   j=0;value=0;
    for(i=0;i<n;i++)
    {
   
        if(a[i]==b[j]&&value==0)
        {
           
        j++;
        count++;
        pos=i;
        flag=1;
           
        }
        else if(a[i]!=b[j]&&value==0)
        {
        if(flag==1)
        {
          
        j--;
        
        count=0;
        pos=0;
        flag=0;
        }
        }
        if(count==m)
        value=pos-count;
    }
            if(value!=0)
                printf("%d",value);
            else
               printf("-1");
}
