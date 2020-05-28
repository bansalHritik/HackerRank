#include<iostream>
using namespace std;
int main()
{
    int size,i,j,k,l,flag,b,s;
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    {
        cin>>b>>s;
        for(j=0;j<s;j++)
            cin>>a[j];
        for(k=0;k<s;k++)
        {
            flag=0;
            for(l=k+1;l<s;l++)
            {
                if(a[k]+a[l]==b)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        cout<<k+1<<" "<<l+1;
    }
    return 0;
}
