#include<stdio.h>
int main()
{
    int n,k,i,c[25],end,start=0,energy=100;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&c[i]);
    while(n>=k)
    {
        end=start+k;
        if(end>=n)
            end=end-n;
        if(end==0)
        {
            if(c[end]==1)
                energy=energy-3;
            else
                energy=energy-1;
            break;
        }
        if(end!=0)
        {
            if(c[end]==1)
                energy=energy-3;
            else
                energy=energy-1;
        }
        start=end;
    }
    printf("%d",energy);
    return 0;
}
