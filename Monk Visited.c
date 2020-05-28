#include<stdio.h>
void fun(void)
{
    int size,i,p[1000],d[1000],j,sum,min,a[100];
    scanf("%d",&size);
    for(i=0;i<size;i++)
        scanf("%d",&p[i]);
    for(i=0;i<size;i++)
        scanf("%d",&d[i]);
    for(i=0;i<size;i++)
    {
        sum=0;
        for(j=0;j<size;j++)
        {
            sum=sum+p[i]*d[j];
        }
        a[i]=sum;
    }
    min=a[0];
    for(i=1;i<size;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    printf("%d",min);
}
int main()
{
    int test,i;
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        fun();
    }
    return 0;
}
