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
    int year,leap=0;
    scanf("%d",&year);
    if(year<1918)
    {
        if(year%4==0)
            leap++;
    }
    if(year==1918)
        leap=2;
    if(year>1918)
    {
        if(year%100==0)
            {
            if(year%400==0)
            leap++;
            }
      else if(year%4==0)
            leap++;
    }
    if(leap==1)
        printf("12.09.%d",year);
    if(leap==2)
        printf("26.09.1918");
    if(leap==0)
        printf("13.09.%d",year);
        return 0;
}
