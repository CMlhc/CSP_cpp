#include<bits/stdc++.h>
using namespace std;
int arr[1005][1005];

int main()
{
    memset(arr,0,sizeof(arr));
    int n,m;
    cin>>n>>m;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(j=m-1;j>=0;j--)
    {
        for(i=0;i<n;i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




    return 0;
}
