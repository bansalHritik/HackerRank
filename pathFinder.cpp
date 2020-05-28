#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char pattern[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>pattern[i][j];
        }
    }
    int i=0,j=0;
    int ci,cj;
    while(i<n && j<n)
    {
        ci = i;
        cj = j;
        if(i<(n-1) && pattern[i+1][j]=='.')
        {
            i = i+1;
        }
        else if(j<(n-1) && pattern[i][j+1]=='.')
        {
            j = j+1;
        }
        if(ci==i && cj == j)
            break;
    }
    if(i==n-1 && j==n-1)
    {
        cout<<"Yes Exist";
    }
    else
    {
        cout<<"Not Exist";
    }
    return 0;
}
