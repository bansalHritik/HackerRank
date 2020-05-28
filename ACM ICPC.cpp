#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
struct s
{
    string str;
};
int comp(string s1,string s2,int size)
{
    int i,c=0;
    for(i=0;i<size;i++)
    {
        if(s1[i]=='1' ||s2[i] == '1')
            c++;
    }
    return c;
}
int main()
{
    int n,m,i,pre=0,t,j,count=0;
    cin>>n>>m;
    struct s a[n];
    for(i=0;i<n;i++)
        cin>>a[i].str;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            t = comp(a[i].str,a[j].str,m);
            if(pre == t)
            {
                count++;
            }
            if(pre<t)
            {
                count =1;
                pre = t;
            }
        }
    }
    cout<<pre<<endl<<count;
    return 0;
}
