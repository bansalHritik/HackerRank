#include<stdio.h>
int main()
{
    int x,i,step=0,a[100];
    scanf("%d",&x);
    for(i=0;i<x;i++)
    scanf("%d",&a[i]);
    for(i=0;i<x;)
    {
        if(a[i+2]==0)
        {
            step++;
            i=i+2;
        }
        else
        {
            step++;
            i=i+1;
        }
    }
    step = step-1;
    printf("%d",step);
    return 0;
}
