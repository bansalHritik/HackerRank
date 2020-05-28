#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;
    int a[row][col];
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            cin>>a[i][j];
        }
    }
    int brow,bcol,ecol,erow;
    brow = 0;
    bcol = 0;
    ecol = col -1;
    erow = row -1;
    while(brow <= erow && bcol <= ecol) {
        for(int i=bcol;i<=ecol;i++) {
            cout<<a[brow][i]<<" ";
        }
        for(int i=brow+1;i<=erow-1;i++) {
            cout<<a[i][ecol]<<" ";
        }
        if(erow != brow)
        for(int i=ecol;i>=bcol;i--) {
            cout<<a[erow][i]<<" ";
        }
        for(int i=erow-1;i>=brow+1;i--) {
            cout<<a[i][bcol]<<" ";
        }
        cout<<endl;
        brow++;
        bcol++;
        ecol--;
        erow--;
    }
    return 0;
}
