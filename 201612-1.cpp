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

    sort(arr,arr+n);
    int midnum=0;
    int minnum=0,maxnum=0;

        midnum=arr[n/2];
        //cout<<midnum;
        for(i=0;i<n;i++)
        {
            if(arr[i]>midnum)
            {
                minnum++;
            }

            if(arr[i]<midnum)
            {
                maxnum++;
            }
        }
        if(maxnum==minnum)
        {
            cout<<midnum;
        }else
        {
            cout<<-1;
        }



    return 0;
}
