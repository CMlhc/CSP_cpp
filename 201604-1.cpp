#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1005];
    memset(arr,0,sizeof(arr));
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int num=0;
    for(i=1;i<n-1;i++)
    {
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1])||(arr[i]<arr[i-1] && arr[i]<arr[i+1]))
        {
            num++;
        }
    }

    cout<<num;

    return 0;
}
