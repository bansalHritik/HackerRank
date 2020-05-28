#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k = -1,n,a[1000],b[100],count;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",a[i]);
    for(i=1;i<=100;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i==a[j])
            count=count+1;
        }
        if(count>1)
        {
            k=k+1;
            b[k]=count;
        }
    }
    for(i=0;i<k;i++)
        printf("%d ",b[i]);
    return 0;
}
