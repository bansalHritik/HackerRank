#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int len,count,mid,i,res,tc,j;
    cin>>tc;
    for(j=0;j<tc;j++)
    {
        string str;
        cin>>str;
        count  =0;
        len = str.length();
        if(len%2==1)
        {
            mid = len/2;
            for(i=0;i<mid;i++)
            {
                res = str[i] - str[len-1-i];
                res = abs(res);
                count = count + res;
            }
        }
          else
        {
            mid = len/2;
            res = str[mid] - str[mid-1];
            res = abs(res);
            count = res;
            for(i=0;i<mid-1;i++)
            {
                res = str[i] - str[len-1-i];
                res = abs(res);
                count = count + res;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
