#include<stdio.h>
int main()
{
    int test,p,c,ch,i,candy=0,j;
    scanf("%d",&test);
    for(j=0;j<test;j++)
    {
        scanf("%d %d %d",&p,&c,&ch);
        for(i=ch;i<=p;i++)
        {
        candy++;
        if(i==p)
            i=0;
        if(candy==c)
           {
               printf("%d",i);
           }
        }
    }
    return 0;
}
