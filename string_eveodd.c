#include <stdio.h>
#include<string.h>

int main()
{
    int n,k,b,i;
    char a[100],t;
    scanf("%s",a);
    n=strlen(a);
    
    for(i=0;i<n/2;i++)
    {
        if(i%2==0)
        {
            t=a[i];
            a[i]=a[i+2];
            a[i+2]=t;
            i=i+1;
        }
        else if(i%2!=0)
        {
            t=a[i];
            a[i]=a[i+2];
            a[i+2]=t;
            i=i+1;
            
        }
       
    }
     printf("%s",a);
    return 0;
}
