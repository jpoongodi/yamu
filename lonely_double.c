#include <stdio.h>
#include<math.h>
int comp(const void * a,const void * b)
{
    return (*(int *)a - *(int *)b);
}
int main()
{
    int a[100],i,n,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    qsort(a,n,sizeof(int),comp);
    for(i=0;i<n;i++)
    {
        temp=temp^a[i];
    }
    printf("\n%d",temp);
    return 0;
}
