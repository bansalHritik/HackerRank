#include<stdio.h>
int main()
{
    int size,rot,i,j,a[100000],k;
    scanf("%d %d",&size,&rot);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(j=0;j<rot;j++)
    {
        k=a[0];
        for(i=0;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
        a[size-1]=k;
    }
    for(i=0;i<size;i++)
        printf("%d ",a[i]);
        return 0;
}
