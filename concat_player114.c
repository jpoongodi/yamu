#include <stdio.h>
#include<string.h>
int main()
{
    int n,m,i,j=0;
    char p[100],q[100],a[100];
    scanf("%s %s",p,q);
    m=strlen(p);
    n=strlen(q);
   
    if(m==n)
    {
        printf("%s",strcat(p,q));
    }
    else if(m!=n)
    {
        
        
        if(m>n)
        {
            
            for(i=m-n;i<m;i++)
            {
             a[j]=p[i];
            
             j++;
            }
            a[j]='\0';
            
            
        printf("%s",strcat(a,q));
        }
        else if(m<n)
        {
            
             for(i=n-m;i<n;i++)
             {
             a[j++]=q[i];
             }
             a[j]='\0';
            
        printf("%s",strcat(a,p));
        }
        
    }
    
    return 0;
}
