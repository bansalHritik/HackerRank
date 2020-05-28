#include<stdio.h>
int main()
{
    int j=0,num,i,part[100],temp,n[100],k=0,sum=0,res,n1=0,n2=0,z,half;
    int a,b;
    k=0;
    sum=0;
    n1=0;
    n2=0;
    scanf("%d %d",&a,&b);
    for(num=a;num<=b;num++)
    {
        j=0;
    res = num;
    num = num*num;
    while(num>0)
    {
            part[j] =  num % 10;
            num=num/10;
            j++;
    }
    for(i=0;i<j/2;i++)
    {
        temp = part[i];
        part[i] = part[j-i-1];
        part[j-i-1] = temp;
    }
    half = j/2;
    for(z=half;z<j;z++)
        n1= n1*10+ part[z];
    for(z=0;z<half;z++)
        n2= n2*10+part[z];
    sum = n1+n2;
    if(res == sum)
        printf("%d ",sum);
    }
    return 0;
}
