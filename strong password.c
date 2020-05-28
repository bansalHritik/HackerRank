#include<stdio.h>
#include<string.h>
int main()
{
    int a=0,i,x,b=0;
    char str[100];
    scanf("%d",&x);
    scanf("%s",str);
        if(strlen(str)<6)
            b++;
            a++;
        for(i=0;i<x;i++)
            if(str[i]>=65 && str[i]<=90)
                {
                    a++;
                    break;
                }
        for(i=0;i<x;i++)
           if(str[i]>=97 && str[i]<=122)
                {
                    a++;
                    break;
                }
        for(i=0;i<x;i++)
               if(str[i]>=48 && str[i]<=57)
                {
                    a++;
                    break;
                }
        for(i=0;i<x;i++)
            if(str[i] == '!' || str[i] == '@' ||str[i] == '#' ||str[i] == '$' ||str[i] == '%' ||str[i] == '^' ||str[i] == '&' ||str[i] == '*' ||str[i] == '(' ||str[i] == ')' ||str[i] == '+' ||str[i] == '-')
                {
                    a++;
                    break;
                }
             if(a<=5)
            printf("%d",5-a);
    return 0;
}

