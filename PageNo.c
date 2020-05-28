#include<stdio.h>
#include<conio.h>
int main()
{
    int tp,pn,i,j,turn=0,fturn,bturn;
    scanf("%d %d",&tp,&pn);
    for(i=0,j=1;j<=tp&&i<=tp;j=j+2,i=i+2)
    {
        if(i==pn||j==pn)
            break;
        turn++;
    }
    fturn= turn;
    turn =0;
    if(tp%2==0)
    {
        for(i=tp,j=tp+1;i>=0&&j>=1;j=j-2,i=i-2)
        {
            if(i==pn||j==pn)
            break;
        turn++;
        }
    }
    if(tp%2==1)
    {
        for(i=tp-1,j=tp;i>=0&&j>=1;j=j-2,i=i-2)
        {
            if(i==pn||j==pn)
            break;
        turn++;
        }
    }
    bturn=turn;
    if(bturn>fturn)
        printf("%d",fturn);
    else
    printf("%d",bturn);
    return 0;
}
