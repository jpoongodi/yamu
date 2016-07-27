#include<stdio.h>
main()
{
int a,r,sum=0,i,dig[5],flag=0;
scanf("%d",&a);
while(a)
{
r=a%10;
sum=sum+r;
a/=10;
}
i=0;
while(sum)
{
dig[i++]=sum%10;
sum/=10;
}
i--;
while(sum<=i)
{
if(dig[sum++]!=dig[i--])
{
flag=1;
break;

}
}
if(flag==0)
	printf("\nPalindrome\n");
else
	printf("\nNot Palindrome\n");
return ;
}
