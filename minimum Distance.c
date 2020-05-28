#include<stdio.h>
int main()
{
    int a[1000],fi[1000],i,j,k,l=0,pre,q,z=0,size,max;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        pre = 0;
        q=0;
        for(j=0;j<i;j++)
        {
            if(a[i] == a[j])
            {
                pre = 1;
                break;
            }
        }
        if(pre == 0)
        {
            for(k=i+1;k<size;k++)
            {
                if(a[i]==a[k])
                {
                    fi[l]= k-i;
                    q=1;
                    z=1;
                }
            }
        }
        if(q==1)
            l++;
    }
    if(z==1)
    {
        max= a[0];
    for(i=1;i<l;i++)
        max = fi[i];
    printf("%d",max);
    }
    if(z!=1)
        printf("-1");
    return 0;
}
