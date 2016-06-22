#include <stdio.h>
#include<math.h>
int bin(int x)
{
    int t,r,count=0;
    while(t--)
    {
        r=t%2;
        if(r==1)
        count++;
        t=t/10;
    }
}

int main()
{
    int n,temp,i=0,j,a[20],k,b[20];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    b[i]=bin(a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            if(b[j]==b[j+1]&&a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
    return 0;
}
