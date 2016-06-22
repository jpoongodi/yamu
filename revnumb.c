#include <stdio.h>
#include<math.h>
int main()
{
    int n,temp,i=0,j,r[20];
    scanf("%d",&n);
    temp=abs(n);
    while(temp)
    {
        r[i++]=temp%10;
       
        temp/=10;
    }

    for(j=0;j<i;j++)
    {
        printf("%d",r[j]);
    }
    return 0;
}
