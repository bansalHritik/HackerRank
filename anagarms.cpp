#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,len;
    string s;
    cin>>s;
    len = s.size();
    if(len%2==0)
    {
        char a[len/2],b[len/2];
        for(i=0;i<len/2;i++)
        {
            a[i] = s[i];
        }
        for(i=0;i<len/2;i++)
        {
            b[i] = s[len/2+i];
        }

    }
    else
    {
        cout<<"-1";
    }
    return 0;
}
