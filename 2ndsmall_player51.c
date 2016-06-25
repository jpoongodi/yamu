#include<stdio.h>
int comp(const void * a,const void * b)
{
    return (*(int *)a - *(int *)b);
}
main()
{
int a[100],n,i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
qsort(a,n,sizeof(int),comp);
printf("%d",a[1]);

}
