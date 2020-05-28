#include<stdio.h>
#include<stdlib.h>
void cam(int fc,int sc,int rat)
{
    if(fc<rat&&sc<rat)
    {
        if(fc==sc)
            printf("Mouse C\n");
        if(fc>sc)
            printf("Cat A\n");
        if(sc>fc)
            printf("Cat B\n");
    }
    if(sc>=rat||fc>=rat)
    {
        fc=abs(rat-fc);
        sc=abs(rat-sc);
        if(fc<sc)
            printf("Cat A\n");
        if(sc<fc)
            printf("Cat B\n");
        if(sc==fc)
            printf("Mouse C\n");

    }
}
int main()
{
    int test,i,c1[100000],c2[100000],m[100000];
    printf("Enter testcase ?");
    scanf("%d",&test);
    for(i=0;i<test;i++)
    {
        scanf("%d %d %d",&c1[i],&c2[i],&m[i]);
    }
    for(i=0;i<test;i++)
    {
        cam(c1[i],c2[i],m[i]);
    }
return 0;
}
