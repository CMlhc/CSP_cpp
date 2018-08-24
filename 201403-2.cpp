#include<bits/stdc++.h>
using namespace std;
int arr[2600][2600];

struct win{
    int x1,y1;
    int x2,y2;
}a[10];

int main()
{

    memset(arr,0,sizeof(arr));
    int N,M;
    cin>>N>>M;
    int i,j,k;
    int x1,y1,x2,y2;
    for(i=0;i<N;i++)
    {
        cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2;
        for(j=a[i].x1;j<=a[i].x2;j++)
        {
            for(k=a[i].y1;k<=a[i].y2;k++)
            {
                arr[j][k]=i+1;
            }
        }

    }

    int x,y;
    for(i=0;i<M;i++)
    {
        cin>>x>>y;
        int temp=arr[x][y];
        if(temp==0)
        {
            cout<<"IGNORED"<<endl;
        }else
        {
            cout<<temp<<endl;
            for(j=a[temp-1].x1;j<=a[temp-1].x2;j++)
            {
                for(k=a[temp-1].y1;k<=a[temp-1].y2;k++)
                {
                    arr[j][k]=temp;
                }
            }
        }
    }




    return 0;
}
