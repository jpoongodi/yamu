#include  <stdio.h>
#include<math.h>
int main(void)
{
    long long int n,sum=0,i=0,l,a[10];
    scanf("%llu",&n);
    while(n)
    {
        a[i++]=n%10;
        n/=10;
    }
    sum=a[i-1];
    l=i;
    for(i=l-2;i>=0;i--)
    {
         
        sum+=pow(a[i],a[i+1]);
        
    }
    printf("%llu\n",sum);
    return 0;
}
