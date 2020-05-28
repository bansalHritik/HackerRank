#include<stdio.h>
#include<string.h>
int main()
{
    int size,i,j;
    scanf("%d",&size);
    for(j=0;j<size;j++)
    {
        char str[100000];
        scanf("%s",str);
        int i,count=0;
        for(i=0;i<(strlen(str)-1);i++)
        if(str[i]== str[i+1])
        count++;
        printf("%d\n",count);
        str[100000]=null;
    }
     return 0;
}
