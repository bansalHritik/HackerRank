#include<stdio.h>
#include<conio.h>
void fun(void)
{
    int stu,min,j,a[10000],count=0;
    scanf("%d %d",&stu,&min);
    for(j=0;j<stu;j++)
        scanf("%d",&a[j]);
    for(j=0;j<stu;j++)
        if(a[j]<=0)
        count++;
    if(count<min)
        printf("YES\n");
    if(count>=min)
        printf("NO\n");

}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    fun();
    }
    return 0;
}
