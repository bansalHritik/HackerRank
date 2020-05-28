#include<iostream>
#include<stdlib.h>
using namespace std;
int shortest(int arr[],int i,int n)
{
    int s,j,pos=i;
    s= arr[i];
    for(j=i+1;j<n;j++)
    {
        if(s>arr[j])
        {
            s= arr[j];
            pos= j;
        }
    }
    return pos;
}
int main()
{
    int size,i,flag=0,count,s,pos,temp;
    cin>>size;
    int a[size];
    for(i=0;i<size;i++)
    cin>>a[i];
    cout<<size<<endl;
    while(flag!=1)
    {
        count = 0;
         for(i=0;i<size;i++)
    {
        pos= shortest(a,i,size);
        temp = a[pos];
        a[pos] = a[i];
        a[i] = temp;
    }
    for(i=0;i<size;i++)
        {
            if(a[i]>0)
                s = a[i];
        }
        for(i=0;i<size;i++)
        {
            if(a[i]>0 && a[i]<s)
                s = a[i];
        }
        for(i=0;i<size;i++)
        {
            a[i] = a[i] - s;

            if(a[i]>0)
                count++;
        }
        if(count==0)
        {
            flag =1;
            break;
        }
        else
            cout<<count<<endl;
    }
}
