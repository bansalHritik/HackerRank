#include<stdio.h>
#include<conio.h>
int main()
{
    int n,k,i,bill[10000],charged,total=0,anna;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
        scanf("%d",&bill[i]);
    scanf("%d",&charged);
    for(i=0;i<n;i++)
        total=total+bill[i];
    total=total-bill[k];
    anna=total/2;
    anna=charged-anna;
    if(anna==0)
        printf("Bon Appetit");
    if(anna!=0)
        printf("%d",anna);
        return 0;
}
