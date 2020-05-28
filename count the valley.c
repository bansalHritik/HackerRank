#include<stdio.h>
int main()
{
    int i=0,size,pos=0,count=0,b=1;
    char a[100000];
    scanf("%d",&size);
    scanf("%s",a);
            while(i<size)//UDDDUDUU
                                //1,0,-1,-2,-1,-2,-1,0
            {
                if(a[i]=='U')
                {
                    pos++;
                    printf("At %d Location Position Is %d\n",i,pos);
                }
                else//DDUUUUDD
                {
                    pos--;
                      printf("At %d Location Position Is %d\n",i,pos);
                }
                if(pos == 0 && a[i]=='U')
                    count++;
                i++;
                printf("%d is Current Count\n");
            }
    printf("%d",count);
    return 0;
}
