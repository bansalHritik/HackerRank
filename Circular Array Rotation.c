#include<stdio.h>
#include<stdlib.h>
int main()
{
    long int n ,k,qr,*a,*q,i,j,temp,z;
    scanf("%ld %ld %ld",&n,&k,&qr);
    a= (long int *)malloc(sizeof(long int)*n);
    q= (long int *)malloc(sizeof(long int)*qr);
    for(i=0;i<n;i++)
        scanf("%ld",(a+i));
    for(i=0;i<qr;i++)
        scanf("%ld",(q+i));
    for(j=0;j<k;j++)
    {
        temp = *(a+n-1);
        for(i=0;i<=n-2;i++)
           *(a+n-1-i)=*(a+n-2-i);
        *(a)=temp;
    }
    for(i=0;i<qr;i++)
    {
        z=*(q+i);
    printf("%ld\n",*(a+z));
    }
    return 0;
}
