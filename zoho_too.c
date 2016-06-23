#include <stdio.h>

int main()
{
    char s[24]="WELCOMETOZOHOCORPORATION",a[5][5];
    int i,j,k=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            a[i][j]=s[k++];
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(a[i][j]=='T'&&a[i+1][j]=='O'&&a[i+2][j]=='O')
            {
                printf("<%d %d>\n<%d %d>",i,j,i+2,j);
                break;
            }
            else if(a[i][j]=='T'&&a[i][j+1]=='O'&&a[i][j+2]=='O')
            {
                printf("<%d %d>\n<%d %d>",i,j,i,j+2);
                break;
            }
        }
    }
    return 0;
}
