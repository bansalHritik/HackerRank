#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100000],s2[100000];
    int l1,l2,i,j,count=0,k;
    gets(s1);
    gets(s2);
    l1=strlen(s1);
    l2=strlen(s2);
    for(i=0;i<l1;i++)
    {
        k=0;
        for(j=0;j<l2;j++)
        {
            if(s1[i]==s2[j])
            {
                k++;
                break;
            }
        }
        if(k==0)
        count++;
    }
    for(i=0;i<l2;i++)
    {
        k=0;
        for(j=0;j<l1;j++)
        {
            if(s2[i]==s1[j])
            {
                k++;
                break;
            }
        }
        if(k==0)
        count++;
    }
    printf("%d",count);
    return 0;
}
