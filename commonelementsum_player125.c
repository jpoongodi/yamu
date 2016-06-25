#include<stdio.h>
#include<math.h>
void main()
{
  
  int a[100],b[100],i,n,m,j,sum=0;
  scanf("%d %d",&m,&n);
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
 for(i=0;i<m;i++)
 {
     scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<m;j++)
     {
         if(a[i]==b[j])
         b[j]=b[j]*(-1);
     }
 }
 for(i=0;i<m;i++)
 {
     if(b[i]<0)
     {
         sum=sum+(b[i]*(-1));
     }
 }
 printf("%d",sum);
return 0;
}
