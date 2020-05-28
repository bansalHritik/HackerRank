#include<iostream>
using namespace std;
int main()
{
    int p,d,m,b;
    cin>>p>>d>>m>>b;
    int count = 0;
   int spent = 0;
while(spent+p<=b && b>=m)
    {
        spent = p+spent;
        if(p-d>m)
        {
            p = p-d;
        }
        else
        {
            p = m;
        }
        count++;
    }
    cout<<count;
    return 0;
}
