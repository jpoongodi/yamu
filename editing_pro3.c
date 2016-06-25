#include <stdio.h>
#include<math.h>
int main()
{
    char s1[100],s2[100];
    int h1[26]={0},h2[26]={0},i,cost=0,cost1=0,c=0,count=0,m,n;
    scanf("%s %s",s1,s2);
    m=strlen(s1);
    n=strlen(s2);
    for(i=0;i<m;i++)
        h1[s1[i]-97]++;
    for(i=0;i<n;i++)
        h2[s2[i]-97]++;
    if(m==n)
    {
    for(i=0;i<26;i++)
    {
        if(abs(h1[i]-h2[i])>0)
            c++;
    }
    cost1=(c/2)*5;
    }
    else
    {
        for(i=0;i<26;i++)
        {
            count=count+abs(h1[i]-h2[i]);
        }
        cost=count*3;
    }
    if(cost1!=0)
    printf("%d",cost1);
    else if(cost!=0)
    printf("%d",cost);
}

 
