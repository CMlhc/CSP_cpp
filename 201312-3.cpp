#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int arr[1005];
    memset(arr,0,sizeof(arr));
    int i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int temp,temp1,maxnum=0;
    for(i=0;i<n;i++)
    {
        temp=arr[i];
        int num=0;
        for(j=i;j<n;j++)
        {
            if(arr[j]>=temp)
            {
                num++;
            }else
            {
                break;
            }
        }

        for(j=i-1;j>=0;j--)
        {
            if(arr[j]>=temp)
            {
                num++;
            }else
            {
                break;
            }
        }

        num=num*temp;
        if(num>maxnum)
        {
            maxnum=num;
        }
    }

    cout<<maxnum;



    return 0;
}
