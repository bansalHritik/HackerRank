#include<iostream>
#include<string>
using namespace std;
int main()
{
    int gem = 0,size,i,j,k;
    cin>>size;
    string  rock[size];
    int count,len;
    for(i=0;i<size;i++)
    {
        cin>>rock[i];
    }
    for(i=97;i<123;i++)
    {
        for(j=0;j<size;j++)
        {
            count =0;
            len = rock[j].size();
            for(k=0;k<len;k++)
            {
                if(rock[j][k] == i)
                    count++;
            }
            //cout<<"Occurance of "<<i<<" in string "<<j+1<<" is "<<count<<endl;
            if(count == 0)
            break;
        }
        if(count != 0)
            gem++;
    }
    cout<<gem;
return 0;
}
