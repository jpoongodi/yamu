#include <stdio.h>
#include <math.h>
int main()
{
    int n,t,sum=0,i=0,a[100],pos=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    max=abs(a[0]-a[1]);
    for(i=1;i<n-1;i++)
    {
        if(abs(a[i]-a[i+1])>max)
        {
            max=abs(a[i]-a[i+1]);
            pos=i;
        }
    }
   
    printf("%d",pos);
    
    return 0;
}
