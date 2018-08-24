#include<bits/stdc++.h>
using namespace std;

struct node{
    int id;
    int sta;
    int t;
    bool operator < (const node &u) const
    {
        if(t>u.t) return true;
        if(t<u.t) return false;

        if(sta>u.sta) return true;
        if(sta<u.sta) return false;

        if(id>u.id) return true;
        if(id<u.id) return false;

        //return false;
    }


};

priority_queue<node> q;
int arr[1001];


int main()
{
    memset(arr,0,sizeof(arr));
    node x;
    int N,K,w,s,c;
    cin>>N>>K;
    int i;
    for(i=0;i<K;i++)
    {
        cin>>w>>s>>c;
        x.id=w;
        x.sta=1;
        x.t=s;
        q.push(x);
        x.sta=0;
        x.t=s+c;
        q.push(x);
    }

    for(i=1;i<=N;i++)
    {
        arr[i]=i;
    }

    while(!q.empty())
    {
        x=q.top();
        q.pop();
        if(x.sta==0)
        {
            for(i=1;i<=N;i++)
            {
                if(arr[i]==0)
                {
                    arr[i]=x.id;
                    break;
                }
            }
        }else
        {
            for(i=1;i<=N;i++)
            {
                if(arr[i]==x.id)
                {
                    arr[i]=0;
                    break;
                }
            }
        }
    }

    for(i=1;i<=N;i++)
    {
        cout<<arr[i]<<" ";
    }




    return 0;
}
