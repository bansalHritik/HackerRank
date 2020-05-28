#include<stdio.h>
#include<stdlib.h>
int rev(int num)
{
    int n,rn=0;
    while(num!=0)
    {
        n=num%10;
        num=num/10;
        rn=n+rn*10;
    }
        return rn;
}
int main()
{
    int ll,ul,n,i,reverse,newno,count=0;
    scanf("%d %d %d",&ll,&ul,&n);
    for(i=ll;i<=ul;i++)
    {
        reverse=rev(i);
        newno=abs(i-reverse);
        if(newno%n==0)
            count++;
    }
    printf("%d",count);
    return 0;
}
