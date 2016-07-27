#include<stdio.h>
main()
{
int n,a[100],i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
        if(i!=0)
	{        
		if(a[i]<a[i-1])
		printf("%d ",a[i]);
       		else
		printf("%d ",-1);
	}

}
printf("%d ",-1);
return;
}   
