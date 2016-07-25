#include <stdio.h>

int comp(const void * a,const void * b)
{
    return (*(int *)b - *(int *)a);
}
int main()
{
    int a[50],i,k,n;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),comp);
   
    printf("%d",a[k-1]);
    return 0;
}
