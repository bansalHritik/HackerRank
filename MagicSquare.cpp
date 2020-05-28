#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int> m ;
    for(int i=0;i<9;i++)
    {
        int temp;
        cin>>temp;
        m[temp]++;
    }
    queue<int> z,t;
    for(int i=1;i<=9;i++)
    {
        if(m[i]==0)
        {
            z.push(i);
        }
        else if(m[i]>1)
        {
            while(m[i]>1)
            {
                t.push(i);
                m[i]--;
            }
        }
    }
    int sol = 0;
    while(!z.empty())
    {
        sol += abs(z.front()-t.front());
        t.pop();
        z.pop();
    }
    cout<<sol;
//    cout<<endl<<"zero Array"<<endl;
//    while(!z.empty())1
//    {
//        cout<<z.front()<<" ";
//        z.pop();
//    }
//    cout<<endl<<"Two Array"<<endl;
//    while(!t.empty())
//    {
//        cout<<t.front()<<" ";
//        t.pop();
//    }
    return 0;
}
