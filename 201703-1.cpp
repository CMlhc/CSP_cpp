#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int arr[1005];
    memset(arr,0,sizeof(arr));
    cin>>n>>k;
    int i,num=0,total=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        num+=arr[i];
        if(num>=k)
        {
            num=0;
            total++;
        }
    }
    if(num!=0)
    {
        total++;
    }

    cout<<total;





    return 0;
}
