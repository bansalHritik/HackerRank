#include<iostream>
#include<math.h>
using namespace std;
int nod(long long int num)
{
    int digit = 0;
    while(num>0)
    {
        digit++;
        num = num/10;
    }
    return digit;
}
int main()
{
    long int p,q,i,l,r,b,j;
    int d,a =10,flag=0;
    cin>>p>>q;
    for(i=p;i<=q;i++)
    {
        d = nod(i);
        j = i*i;
        b =ceil(pow(10,d));
        r = j%b;
        l =j/b;
        if(l+r==i)
        {
            flag = 1;
            cout<<i<<" ";
        }
    }
    if (flag == 0)
        cout<<"INVALID RANGE";
    return 0;
}
