#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,max,lar,a[1000],i;
        scanf("%d %d",&n,&max);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    lar=a[0];
    for(i=1;i<n;i++)
    {
        if(lar<a[i])
        lar=a[i];
    }
    if(max<lar)
        printf("%d",lar-max);
    if(max>lar)
        printf("0");
    return 0;
}
