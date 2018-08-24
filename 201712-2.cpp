#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int i;
    queue<int> q;
    for(i=1;i<=n;i++)
    {
        q.push(i);
    }

    int x=1,t=1;
    while(!q.empty())
    {
        x=q.front();
        q.pop();
        if(t%k==0 || t%10==k)
        {

        }else
        {
            q.push(x);
        }
        t++;
    }
    cout<<x;



    return 0;
}
