#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, next = 0,sum=1;
    scanf("%d",&n);
    for (i=2; i <= n; ++i)
    {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        sum=sum+next;
    }
    printf("%d",sum);
    return 0;
}
