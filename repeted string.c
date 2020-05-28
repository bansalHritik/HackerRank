#include<stdio.h>
#include<string.h>
int main()
{
    long long int num,z,y,i,count=0;
    char str[100];
    scanf("%s",str);
    scanf("%lld",&num);
    z = num/strlen(str);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]=='a')
            count++;
    }
    z=z*count;
    printf("%d\n",z);
    count=0;
    y = (num%strlen(str));
    for(i=0;i<y;i++)
    {
        if(str[i]=='a')
            count++;
    }
    z=z+count;
    printf("%lld",z);
    return 0;
}
