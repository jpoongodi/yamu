#include <stdio.h>

void sub(int a[10][10],int m,int n)
{
    int b[10][10],i,j,mi,mj,max=0;
    
    for(i=0;i<m;i++)
    b[i][0]=a[i][0];
    
    for(i=0;i<n;i++)
    b[0][i]=a[0][i];
    
    for(i=1;i<m;i++)
    {
        for(j=1;j<n;j++)
        {
            if(a[i][j]==1)
            b[i][j]=min(b[i][j-1],b[i-1][j],b[i-1][j-1])+1;
            else
            b[i][j]=0;
        }
    }
    
    max=b[0][0];
    mi=0;
    mj=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(max<b[i][j])
            {
                max=b[i][j];
                mi=i;
                mj=j;
            }
        }
    }
    
    for(i=mi;i>mi-max;i--)
    {
        for(j=mj;j>mj-max;j--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    
}

int min(int a, int b, int c)
{
  int m = a;
  if (m > b) 
    m = b;
  if (m > c) 
    m = c;
  return m;
}

int main()
{
    int n,m,i,j,a[10][10];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    sub(a,m,n);
    
    

    
    return 0;
}
