#include<iostream>
using namespace std;
int main()
{
    int ca,cb,i,j,lb,la,sum=0;
    string a,b;
    cin>>a;
    cin>>b;
    la= a.size();
    lb=b.size();
    total =la+lb;
    for(i=97;i<123;i++)
    {
        ca=0;
        cb=0;
        for(j=0;j<la;j++)
        {
            if(a[j]==i)
                ca++;
        }
        for(j=0;j<lb;j++)
        {
            if(b[j]==i)
                cb++;
        }
        sum = sum +max(ca,cb) - min(ca,cb);
    }
    cout<<sum<<endl;

    return 0;
}
