#include <stdio.h>
#include <string.h>
struct father
{
    char a[2][10];
}t[10];
int i,j,n,son=0,count=0;
char in[10];
void find_grandson()
{
   
    for(i=0;i<n;i++)
    {
        if(!strcmp(t[i].a[1],t[son].a[0]))
        count++;
    }
}
int main()
{
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%s",t[i].a[j]);
        }
    }
    scanf("%s",in);
    for(i=0;i<n;i++)
    {
        if(!strcmp(t[i].a[1],in))
        son=i;
    }
    
    find_grandson();
    printf("%d",count);
    return 0;
}
