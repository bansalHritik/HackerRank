#include<iostream>
#include<algorithm>
using namespace std;
int maxi(int a,int b)
{
        if(a>b)
            return a;
        else
            return b;
}
int main()
{
    int num_of_cities,num_of_station;
    cin>>num_of_cities>>num_of_station;
    int stations[num_of_station];
    int max=0,temp;
    for(int i=0;i<num_of_station;i++)
    {
        cin>>stations[i];
    }
    sort(stations,stations+num_of_station);
    int max_gap=0;
    for(int i=0;i<num_of_station-1;i++)
    {
        temp = stations[i+1]-stations[i];
        if(temp>max_gap)
        {
            max_gap = temp;
        }
    }
    max_gap/=2;
    int t = maxi((num_of_cities-stations[num_of_station-1]-1),stations[0]);
    max_gap>t?cout<<max_gap:cout<<t;
    return 0;
}
