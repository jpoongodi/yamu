#include <stdio.h>
#include<math.h>
int comp(const void * a,const void * b)
{
    return (*(int *)b - *(int *)a);
}

int main()
{
    int n,temp,i=0,j,r[20],k;
    scanf("%d %d",&n,&k);
    temp=n;
    while(temp)
    {
        r[i++]=temp%10;
       
        temp/=10;
    }
    qsort(r,i,sizeof(int),comp);
    for(j=i-1;j>=k;j--)
    {
        printf("%d",r[j]);
    }
    return 0;
}

    Status API Training Shop Blog About 

