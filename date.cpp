#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i = 1;i<=tc;i++)
    {
        int size,j;
        long int x,k,z;
        cin>>size;
        long int a[size];
        for(j= 0;j<size;j++)
            cin>>a[j];
        cin>>z;
        cin>>x;
        // sort 1
        for(j=0; j<size; j++)
        {
            for(int k=j+1; k<size; k++)
            {
            //If there is a smaller element found on right of the array then swap it.
            if((a[j]^x)<(a[k]^x))
                {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
                }
            }
        }

         /*for(j=0; j<size; j++)
        {
        for(int k=j+1; k<size; k++)
        {
            //If there is a smaller element found on right of the array then swap it.
            if((a[j]<(a[j]^x) && a[k]<(a[k]^x))(a[j]^x)<(a[k]^x))
            {
                int temp = a[j];
                a[j] = a[k];
                a[k] = temp;
            }
        }
    }*/
    int count =0;
    int sum =0,flag=0,min;
        for(j=0;j<size;j++)
    {
        if(count == z)
            break;
        if(a[j]>0 && (a[j]<=(a[j]^x)))
           {
               count ++;
               a[j] = -1;
               sum = sum + (a[j]^x);
           }
        else if(a[j]>0 && (a[j]>(a[j]^x)))
            {
                if(flag == 0)
                {
                    flag = 1;
                    min = j;
                }
                else if(a[min]<a[j])
                min = j;
            }
    }
    sum = sum + (a[min]^x);
    a[min] = -1;
    for(j=0;j<size;j++)
    {
        if(a[j]>0)
            sum=  sum+a[j];
    }
    for(j=0;j<size;j++)
        cout<<a[j]<<" ";
    cout<<endl<<"Max is "<<sum;
    }
    return 0;
}
