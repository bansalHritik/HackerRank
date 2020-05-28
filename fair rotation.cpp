#include<iostream>
using namespace std;
int main()
{
    int odd=0,size,count=0,i;
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        if(a[i]%2==1)
            odd++;
    }
    if(odd%2==1)
        cout<<"NO";
    else
    {
        for(i=0;i<size;i++)
        {
            if(a[i]%2==1)
            {
                a[i]=a[i]+1;
                a[i+1] = a[i+1] +1;
                count = count+2;
            }
        }
          cout<<count;
    }
    return 0;
}
