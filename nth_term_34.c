#include <stdio.h>
#include <math.h>

int main() {
    int n,i,j=1,k[10]={0},rem,dig,binary=0,dec=0;
    scanf("%d",&n);
    i=0;
    while(n>=(pow(2,i)-1))
        {
        dig=i;
        i++;
    }
    
    dec=n-(pow(2,dig)-1);
    
    if(dig==1)
        {
        if(n==1)
            printf("3");
        else
            printf("4");
    }
    else
       {
        while(dec!=0)
        {
            rem=dec%2;
            dec/=2;
            binary+=rem*j;
            j=j*10;
        }
       
        for(i=dig-1;i>=0;i--)
            {
            k[i]=binary%10;
            binary/=10;
            if(k[i]==0)
                k[i]=3;
            if(k[i]==1)
                k[i]=4;
        }
        for(i=0;i<dig;i++)
            {
            printf("%d",k[i]);
        }
    }
    
    return 0;
}
