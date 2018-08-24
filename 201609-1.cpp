#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005];
    memset(arr,0,sizeof(arr));

    int arr1[1005];
    memset(arr1,0,sizeof(arr1));

    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(i=0;i<n-1;i++)
    {
        arr1[i]=abs(arr[i]-arr[i+1]);
    }

    sort(arr1,arr1+n-1);

    cout<<arr1[n-2];






    return 0;
}
