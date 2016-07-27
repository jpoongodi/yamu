#include<stdio.h>
#include<string.h>
void main()
{
	char s[10][100];
	int i,j,n,max=0,mark[10]={0},pos=-1,len;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
		len=strlen(s[i]);
		for(j=0;j<len;j++)
		{
			if(s[i][j]>='0'&&s[i][j]<='9'&&s[i][j+1]>='0'&&s[i][j+1]<='9')
			{
			  mark[i]+=(s[i][j]-48)*10 + s[i][j+1]-48;
			}
		}
		
		if(mark[i]>max)
		{
		max=mark[i];
		pos=i;
		}
	}
	len=strlen(s[pos]);
	for(i=0;i<len;i++)
	{
	if(s[pos][i]!='#')
	printf("%c",s[pos][i]);
	else
	break;
	}
	
	return;
}
