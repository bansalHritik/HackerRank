#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    int i,count=0,k,j;
    gets(str);
    for(i=65,k=97;i<=90,k<=122;i++,k++)
    {
        for(j=0;j<strlen(str);j++)
        if(str[j] == i || str[j] == k)
        {
            count++;
            break;
        }
    }
    if(count== 26)
        printf("panagram");
    else
        printf("not panagram");
    return 0;
}
