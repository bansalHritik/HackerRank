#include<stdio.h>
int main()
{
    int x,i,a[100],b[100]={0},j,max;
    printf("Enter Size ");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            if(a[i]==a[j])
                b[i]=b[i]+1;
        }
    }
    max=b[0];
    for(i=1;i<x;i++)
    {
        if(max<b[i])
            max= b[i];
    }
    printf("%d",(x-max));
    return 0;
}
