#include<bits/stdc++.h>
using namespace std;
int arr1[20][20];
int arr2[4][4];

struct point{
    int x,y;
}a[4];

int main()
{
    int i,j;
    memset(arr1,0,sizeof(arr1));
    memset(arr2,0,sizeof(arr2));

    for(i=4;i<19;i++)
    {
        for(j=0;j<10;j++)
        {
            cin>>arr1[i][j];
        }
    }

    int num=0;
    int max_x=0;
    int min_x=100;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>arr2[i][j];
            if(arr2[i][j]==1)
            {
                a[num].x=i;
                a[num].y=j;
                num++;
                if(min_x>i)
                {
                    min_x=i;
                }
                if(max_x<i)
                {
                    max_x=i;
                }
            }
        }
    }


    int n;
    cin>>n;
    for(i=0;i<4;i++)
    {
        //a[i].x=a[i].x-min_x;
        a[i].y=a[i].y+n-1;

    }
    //max_x=max_x-min_x;
    //cout<<max_x<<endl;

    for(j=0;j<20;j++)
    {
        if(arr1[a[0].x+j][a[0].y]==1 || arr1[a[1].x+j][a[1].y]==1 || arr1[a[2].x+j][a[2].y]==1 || arr1[a[3].x+j][a[3].y]==1 || max_x+j==19)
        {
            arr1[a[0].x+j-1][a[0].y]=1;
            arr1[a[1].x+j-1][a[1].y]=1;
            arr1[a[2].x+j-1][a[2].y]=1;
            arr1[a[3].x+j-1][a[3].y]=1;

            break;
        }
    }



    for(i=4;i<19;i++)
    {
        for(j=0;j<10;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
}
