#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[101][101];
    memset(arr,0,sizeof(arr));
    int n;
    cin>>n;
    int i,j,k;
    int x1,y1,x2,y2;
    for(i=0;i<n;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        for(j=x1;j<x2;j++)
        {
            for(k=y1;k<y2;k++)
            {
                arr[j][k]=1;
            }
        }


    }
    int sum=0;
    for(i=0;i<101;i++)
    {
        for(j=0;j<101;j++)
        {
            sum+=arr[i][j];
        }
    }
    cout<<sum;

    return 0;
}
