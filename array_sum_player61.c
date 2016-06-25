#include<stdio.h>
main()
{
int a[5],i,sum,m=0,pos=0,k=2,pos1=0,j=0,flag=0,spl=-1,n=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
scanf("%d",&sum);
for(i=0;i<n;i++)
{
for(j=i;j<i+k;j++)
{
m=m+a[j];
}
if(sum==m&&flag!=1)
{
pos=i;pos1=j-1;
flag=1;
}
m=0;
if(i==n-1&&k!=n-1&&flag!=1)
{
i=-1;
k++;
}
}

for(i=pos;i<=pos1;i++)
printf("%d ",a[i]);

}
