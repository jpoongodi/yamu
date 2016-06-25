#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int n,i,m,h[256]={0};
scanf("%s %s",a,b);
m=strlen(a);
n=strlen(b);
for(i=0;i<n;i++)
h[b[i]]++;
for(i=0;i<m;i++)
{
    if(!h[a[i]])
      printf("%c",a[i]);
}
return ;
}
