#include<stdio.h>
#include<string.h>
void main()
{
	char s[100],c[4]=".com";
	int i,j,k=0,count=0,pos1,at=0,pos=-1,len;
	scanf("%s",s);
	//printf("%s",s);
	len=strlen(s);
		for(i=0;i<len;i++)
		{
		if(s[i]=='@')
		{
		 at++;
		 pos=i;
		}
		if(s[i]=='.')
		pos1=i;			
		}
		if(at==1)
		{
			if(pos1-pos==6)
			{
				if(pos>=3)
				{
					
					for(i=pos1;i<len;i++)
					{
					if(s[i]==c[k++])
					 count++;
					 }
					 if(count==4&&len-pos1==3)
					 printf("Valid mail id");
					 else
					 printf("Invalid");
				 }
				 else
					 printf("Invalid");
			  }
			  else
					 printf("Invalid");
		 }
		 else
					 printf("Invalid");
		
	return;
}
