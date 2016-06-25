#include<stdio.h>
#include<math.h>
void main()
{
  
  int i,n,j;
  char a[100],t;
  scanf("%s",a);
  n=strlen(a);
  j=n-1;
  for(i=0;i<n/2;i++)
  {
      t=a[i];
      a[i]=a[j];
      a[j--]=t;
  }
  for(i=0;i<n;i++)
    printf("%c-",a[i]);
return 0;
}
