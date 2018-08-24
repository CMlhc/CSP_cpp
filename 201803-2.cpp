#include<bits/stdc++.h>
using namespace std;

struct node
{
    int pos;
    int sta;
}a[105];

int main()
{
    int n,l,t;
    int i,j;
    int arr[1005];
    memset(arr,0,sizeof(arr));
    cin>>n>>l>>t;
    for(i=0;i<n;i++)
    {
        cin>>a[i].pos;
        arr[a[i].pos]++;
        if(a[i].pos==l)
        {
            a[i].sta=-1;
        }else
        {
            a[i].sta=1;
        }
        //cout<<a[i].sta<<endl;
    }

    int v;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n;j++)
        {
            v=a[j].pos;
            arr[v]--;
            if(a[j].sta==1 )
            {
                a[j].pos++;
                arr[a[j].pos]++;
            }else
            {
                a[j].pos--;
                arr[a[j].pos]++;
            }
        }

        for(j=0;j<n;j++)
        {
            if(arr[a[j].pos]==2 || a[j].pos==l || a[j].pos==0)
            {
                if(a[j].sta==1)
                {
                    a[j].sta=-1;
                }else
                {
                    a[j].sta=1;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i].pos<<" ";
    }






    return 0;
}
