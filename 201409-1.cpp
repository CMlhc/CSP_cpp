#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int i;
    int m;
    for(i=0;i<n;i++)
    {
        cin>>m;
        v.push_back(m);
    }

    sort(v.begin(),v.end());

    int sum=0;
    for(i=0;i<n-1;i++)
    {
        if(v[i]+1==v[i+1])
        {
            sum++;
        }

        //cout<<v[i]<<" ";
    }

    cout<<sum;





    return 0;
}
