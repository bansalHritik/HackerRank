#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int coun =0,i=0,len,j=0;
    string str;
    cin>>str;
    len = str.length();
    while(i<(len/3))
    {
        j = i *3;
            if(str[j] != 'S')
        coun++;
            if(str[j+1] != 'O')
                coun++;
            if( str[j+2]!='S')
                coun++;
        i++;
    }
    cout<<coun;
    return 0;
}
