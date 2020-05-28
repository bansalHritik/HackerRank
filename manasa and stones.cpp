#include<iostream>
using namespace std;
int comp (const void * elem1, const void * elem2)
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b)
        {
            cout<<(n-1)*b<<endl;
        }
        else
        {
            int sol[n];
            {
                for(int i=0;i<n;i++)
                    {
                        int temp = a*(n-1-i)+b*i;
                        sol[i] = temp;
                    }
                qsort (sol, sizeof(sol)/sizeof(*sol), sizeof(*sol), comp);
                for(int i=0;i<n;i++)
                    {
                        cout<<sol[i]<<" ";
                    }
            }

            cout<<endl;
        }
    }
    return 0;
}
