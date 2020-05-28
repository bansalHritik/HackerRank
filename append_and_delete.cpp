#include <bits/stdc++.h>
#include<iostream>
using namespace std;

// Complete the appendAndDelete function below.
string appendAndDelete(string s, string t, int k) {
int ls,lt,ans=0,i;
ls = s.size();
lt = t.size();
for(i=0;i<ls;i++)
{
    if(s[i]!=t[i])
    {
        ans= ans + ls - i +1;
        ans =ans+lt-i+1;
        break;
    }
}
if(ans <= k)
return "Yes";
else
return "No";
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string t;
    getline(cin, t);

    int k;
    cin >> k;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string result = appendAndDelete(s, t, k);

    cout << result;

    fout.close();

    return 0;
}

