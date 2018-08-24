#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005];
    int arr1[1005];
    memset(arr,0,sizeof(arr));
    memset(arr1,0,sizeof(arr1));
    int n,m,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>m;
        arr[m]++;
        arr1[i]=arr[m];
    }

    for(i=0;i<n;i++)
    {
        cout<<arr1[i]<<" ";
    }


    return 0;
}
