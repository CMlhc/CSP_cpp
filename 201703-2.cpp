#include<bits/stdc++.h>
using namespace std;

int main()
{
    int pos[1005];
    int que[1005];
    memset(pos,0,sizeof(pos));
    memset(que,0,sizeof(que));

    int n;
    cin>>n;
    int i,j,v;

    for(i=1;i<=n;i++)
    {
        pos[i]=i;
        que[i]=i;
    }

    int m;
    cin>>m;
    int a,b,c;
    for(j=0;j<m;j++)
    {
        cin>>a>>b;
        //cout<<a<<" "<<b<<endl;
        v=pos[a];
        //cout<<v<<endl;
        if(b>0)
        {
            for(i=v;i<v+b;i++)
            {
                //cout<<i<<endl;
                pos[que[i+1]]--;
                que[i]=que[i+1];

            }
            que[pos[a]+b]=a;
            pos[a]=pos[a]+b;
        }else
        {

            for(i=v;i>v+b;i--)
            {
                pos[que[i-1]]++;
                que[i]=que[i-1];

            }
            que[pos[a]+b]=a;
            pos[a]=pos[a]+b;
        }






    }

    for(i=1;i<=n;i++)
    {
        cout<<que[i]<<" ";
    }




    return 0;
}
