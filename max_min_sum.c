#include <stdio.h>
int main()
{
    int a[100],min=9999,max=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(max<a[i])
             max=a[i];
        if(min>a[i])
             min=a[i];
    }
    printf("%d",max+min);
    return 0;
}
