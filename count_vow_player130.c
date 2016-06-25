#include<stdio.h>
void main()
{
  char c[100];
  int i,n,count=0;
  scanf("%s",c);
  n=strlen(c);
  for(i=0;i<n;i++)
 {
  if((c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u')||(c[i]=='A'||c[i]=='E'||c[i]=='I'||c[i]=='O'||c[i]=='U'))
    count++;
 }
 printf("%d",count);
return 0;
}
