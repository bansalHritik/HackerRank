#include<stdio.h>
void fun(void)
{
    int i,a,height=1;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2!=0)
            height=height*2;
        if(i%2==0)
            height=height+1;
    }
    printf("%d\n",height);
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
