#include<bits/stdc++.h>
using namespace std;
const int N=1005;

struct edge
{
    int id;
    int num;
    bool operator <(const edge &u) const
    {
        if(num==u.num)
        {
            return id<u.id;
        }else
        {
            return num>u.num;
        }
    }

}a[N];

int main()
{
    int n;
    int i;
    cin>>n;
    for(i=0;i<N;i++)
    {
        a[i].id=i;
        a[i].num=0;
    }

    int a1;
    for(i=0;i<n;i++)
    {
        cin>>a1;
        a[a1].num++;
    }

    sort(a,a+N);
    for(i=0;i<n;i++)
    {
        if(a[i].num==0)
        {
            break;
        }
        cout<<a[i].id<<" "<<a[i].num<<endl;
    }


    return 0;
}
