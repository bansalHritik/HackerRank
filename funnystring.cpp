#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int size,i,flag;
     string str;
    cin>>size;
    int len,j,k,a[size],b[size];
    for(i=0;i<size;i++)
    {
        flag= 0;
        cin>>str;
        len = str.length();
        for(j=0;j<(len-1);j++)
        {
            a[j] = abs(str[j]-str[j+1]);
        }
        for(k=(len-1);k>0;k--)
        {
            b[k] = abs(str[k]-str[k-1]);
        }
        for(k=0;k<(size-1);k++)
        {
            if(a[k] != b[k])
            {
                flag = 1;
                break;
            }
        }
         for(k=0;k<(size-1);k++)
        {
            cout<<a[k]<<" ";
        }
        cout<<endl;
         for(k=0;k<(size-1);k++)
        {
            cout<<b[k]<<" ";
        }
        cout<<endl;
        if(flag == 0)
            cout<<"FUNNY\n";
        else
            cout<<"NOT FUNNY\n";
    }
    return 0;
}
