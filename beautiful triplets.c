#include<stdio.h>
int main()
{
    int n,d,i,j,k,count=0,a[10000];
    scanf("%d%d",&n,&d);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(k=n;k>=2;k--)
    {
        for(j=k-1;j>=1;j--)
        {
            {
              for(i=j-1;i>=0;i--)
            {
                if(a[j]-a[i]==d && a[k]-a[j]==d)
                    count++;
            }
            }

        }
    }
    printf("%d",count);
    return 0;
}

