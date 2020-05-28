#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,len,a[26],count=0;
    string str;
    cin>>str;
    len =  str.size();
    for(i=97;i<123;i++)
    {
        a[i-97]=0;
        for(j=0;j<len;j++)
        {
            if(str[j] == i)
                a[i-97] = a[i-97]+1;
        }
        if(a[i-97]%2==1)
            count++;
    }
    if(count<2)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
