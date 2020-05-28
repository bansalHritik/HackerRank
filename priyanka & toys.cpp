#include <bits/stdc++.h>
using namespace std;
int find(int a[],int beg,int num)
{
    while(a[beg]<=num)
        beg++;
    return beg;
}
int main()
{
    int size;
    cin>>size;
    int a[size];
    for(int i = 0;i<size ;i++)
    {
        cin>>a[i];
    }
    sort(a,a+size);
    int index = 0;
    int count =0;
    while(index<=size)
    {
        int num = a[index]+4;
        index = find(a,index,num);
        if(index<=size)
            count++;
    }
    cout<<(count);
    return 0;
}
