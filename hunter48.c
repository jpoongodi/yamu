#include<stdio.h>
#include<string.h>
main()
{
char s[100],p[50];
int i,j,m,n,flag=0,r=-1;
gets(s);
scanf("%s",p);
n=strlen(s);
m=strlen(p);
i=0;j=0;
while(i<n)
{
	if(s[i]==p[j])
	{
		
		r=i;
		while(j<m)
		{
			if(s[i++]!=p[j++])
			{
			flag=1;
			break;
			}
		}
		if(flag==0)
		{
			printf("\n%d\n",r);
		}
		else
		{
		i=r;
		j=0;
		flag=0;
		r=-1;
		}
	}
        i++;
}
if(r==-1)
printf("1");
return;
}
