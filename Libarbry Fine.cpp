#include<iostream>
using namespace std;
/*
int dim(int m,int y)
{
    if(m==11||m==9||m==6||m==4)
        return 30;
    else if(m==2)
    {
        if(y%4==0)
        {
            if(y%100==0)
            {
                if(y%400==0)
                    return 29;
                else
                    return 28;
            }
            else
                return 28;
        }
        else
            return 28;
    }
    else
        return 31;
}*/
int main()
{
    int d1,y1,m1,d2,m2,y2;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if((y1==y2 && m1==m2) &&d1==d2)
        cout<<"0";
    else if((y1==y2 && m1==m2) &&d1!=d2)
    {
        cout<<(d1-d2)*15;
    }
    else if(y1==y2 && m1!=m2)
    {
        //cout<<"Days In M1 "<<dim(m1,y1)<<"Days In M2 "<<dim(m2,y2)<<endl;
        //cout<<((dim(m1,y1)-d1)+(dim(m2,y2)-d2))*;
        cout<<(m1-m2)*500;
    }
    else if(y1!=y2)
        cout<<(y1-y2)*10000;
    return 0;
}
