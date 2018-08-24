#include<bits/stdc++.h>
using namespace std;
int arr1[35][35];
int arr2[35][35];

int main()
{
    memset(arr1,0,sizeof(arr1));
    memset(arr2,0,sizeof(arr2));

    int n,m;
    cin>>n>>m;
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }

    //
    for(i=0;i<n;i++)
    {
        for(j=0;j<m-2;j++)
        {
            if(arr1[i][j]==arr1[i][j+1] && arr1[i][j]==arr1[i][j+2] && arr1[i][j+1]==arr1[i][j+2])
            {
                arr2[i][j]=arr2[i][j+1]=arr2[i][j+2]=1;
            }
        }
    }

    for(j=0;j<m;j++)
    {
        for(i=0;i<n-2;i++)
        {
            if(arr1[i][j]==arr1[i+1][j] && arr1[i][j]==arr1[i+2][j] && arr1[i+1][j]==arr1[i+2][j])
            {
                 arr2[i][j]=arr2[i+1][j]=arr2[i+2][j]=1;
            }
        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(arr2[i][j]==1)
            {
                arr1[i][j]=0;
            }
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
