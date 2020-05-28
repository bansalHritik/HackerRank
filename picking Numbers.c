#include<stdio.h>
int main()
{
    int size,a[100],b[100],k=0,i,j,count=0,max;
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=0;j<size;j++)
            if(a[i]==a[j]||a[i]==(a[j]+1))
                count++;
        if(count>0)
            {
               b[k]=count;
               k++;
            }
    }
    max=b[0];
    for(i=1;i<k;i++)
    {
        if(max<b[i])
            max=b[i];
    }
    printf("%d",max);
    return 0;
}
