#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[10005]={0};
    int n,m;
    cin>>n;
    int i;
    for(i=0;i<n;i++)
    {
        cin>>m;
        arr[m]++;
    }


    int temp=0,maxn_num=0;

    for(i=0;i<10005;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
            maxn_num=i;
            //cout<<temp<<maxn_num<<endl;
        }
    }

    cout<<maxn_num;

    return 0;
}
