#include<stdio.h>
#include<string.h>
void main()
{
int n,i,count=0,count1=0,a[100];
scanf("%d",&n);
for(i=0;i<n;i++)
 scanf("%d",&a[i]);
for(i=0;i<n-1;i++)
{
    if(a[i]<a[i+1])
      count++;
    else if(a[i]>a[i+1])
       count1++;
}
if(count==n-1||count1==n-1)
printf("yes");
else
printf("no");
return ;
}
