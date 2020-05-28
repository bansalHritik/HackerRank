#include<stdio.h>
int main()
{
    int size,i,j,k,a[1000];
    scanf("%d",&size);
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if((i+1)==a[j])
            {
                for(k=0;k<size;k++)
                    if((j+1)==a[k])
                    printf("%d\n",k+1);
            }
        }
    }
    return 0;
}
