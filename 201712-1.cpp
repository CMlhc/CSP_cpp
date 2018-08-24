#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[1005];
    memset(arr,0,sizeof(arr));
    int n;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);
    int num=10000;
    for(i=1;i<n;i++)
    {
        int temp=abs(arr[i]-arr[i-1]);
        if(temp<num)
        {
            num=temp;
        }
    }
    cout<<num;

    return 0;
}
