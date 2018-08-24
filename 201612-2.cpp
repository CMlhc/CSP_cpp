#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[6]={1500,4500,9000,35000,55000,80000};
    double arr2[6];
    double arr3[6]={0.03,0.1,0.2,0.25,0.3,0.35};
    memset(arr2,0,sizeof(arr2));
    int total=0;
    arr2[0]=arr1[0]-arr1[0]*0.03;
    total=arr2[0];
    //cout<<total<<endl;
    int i;
    for(i=1;i<6;i++)
    {
        arr2[i]=arr1[i]-arr1[i-1]-(arr1[i]-arr1[i-1])*arr3[i]+total;
        total=arr2[i];
        cout<<i<<" "<<total+3500<<endl;
    }

    int n;
    cin>>n;
    if(n<=3500)
    {
        cout<<n;
    }else
    {
        n=n-3500;
        for(i=0;i<6;i++)
        {
            if(n<=arr2[i])
            {
                break;
            }
        }

        cout<<i<<endl;
        if(i==6)
        {

            cout<<3500+arr1[5]+(n-arr2[5])/0.45;

        }else
        {
            cout<<3500+arr1[i]+(n-arr2[i])/(1-arr3[i]);
        }

    }




    //cout<<arr2[1];





    return 0;
}
