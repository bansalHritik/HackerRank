#include<iostream>
#include<string>
using namespace std;
int main()
{
    int size,c =0,i;
    cin>>size;
    char str[size];
    cin>>str;
    if(size>2)
    for(i=0;i<size-2;i++)
    {
        if(str[i] == '0' && str[i+1] =='1'&& str[i+2] == '0')
        {
            ++c;
            if(str[i+2]== '0')
            {
                str[i+2] = '1';
            }
            else
                str[i+2] = '0';
        }
    }
    cout<<c;
    return 0;
}
