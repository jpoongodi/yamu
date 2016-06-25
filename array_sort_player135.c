#include <stdio.h>
int comp(const void * a,const void * b)
{
    return (*(int *)a - *(int *)b);
}
int comp1(const void * a,const void * b)
{
    return (*(int *)b - *(int *)a);
}
int main()
{
    int i,j,k,m,n,a[100],b[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
     qsort(a,n/2,sizeof(int),comp);
     j=n/2;
    for(i=0;i<n/2;i++)
    {
        printf("%d ",a[i]);
        b[i]=a[j++];
    }
   qsort(b,n/2,sizeof(int),comp1);
    for(i=0;i<n/2;i++)
    {
        printf("%d ",b[i]);
        
    }
      
    return 0;
}
