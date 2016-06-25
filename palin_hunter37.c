#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    char s[100000];
    scanf("%d",&t);
    while(t--)
        {
        int i,j,count=0,len,pos1=-1,pos2=-1,flag1=0,flag2=0;
        scanf("%s",s);
        len=strlen(s);
        i=0;j=len-1;
        while(i<j)
            {
            if(s[i]!=s[j]&&count!=1)
                {
                count++;
                pos1=i;pos2=j;
               
            }
             i++;j--;
        }
        if(s[pos1]==s[pos2-1])
            flag1=1;
        if(s[pos2]==s[pos1+1])
            flag2=1;
        if(flag1==1&&flag2!=1)
            printf("%d\n",pos2);
        else if(flag2==1&&flag1!=1)
            printf("%d\n",pos1);
        else if(flag2==1&&flag1==1)
            printf("%d\n",pos1);
       else
            printf("-1\n");
            
        
        
    }
      
    return 0;
}
