#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10] = {1,2,4,5,3,6,8,1,9,2};
    int i;
    sort(a,a+5);
    if(binary_search(a,a+10,4))
    cout<<"Number Hai";
    else
        cout<<"Nhi Hai";
    return 0;
}
