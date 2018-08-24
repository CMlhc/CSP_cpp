#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i;
    int num=1;
    int arr[1005];
    memset(arr,0,sizeof(arr));
    cin>>arr[0];
    for(i=1;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]!=arr[i-1])
        {
            num++;
        }
    }

    cout<<num<<endl;



    return 0;
}
