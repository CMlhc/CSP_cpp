#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int i;
    int arr1[1005]={0};
    int arr2[1005]={0};
    //memset(arr1,0,sizeof(arr1));
    //memset(arr2,0,sizeof(arr2));
    int m=0,sum=0;
    for(i=0;i<n;i++)
    {
        cin>>m;
        if(m>0)
        {
            arr1[m]++;
        }else if(m<0)
        {
            arr2[-m]++;
        }

        //cout<<arr1[m]<<" "<<arr2[m]<<endl;

        //cout<<m<<endl;

    }

    for(i=0;i<1005;i++)
    {
        if(arr1[i]==1 && arr2[i]==1)
        {
            sum++;
        }
    }

    cout<<sum;




    return 0;
}
