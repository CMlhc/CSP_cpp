#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr1[100];
    memset(arr1,0,sizeof(arr1));


    //memset(arr2,0,sizeof(arr2));
    //cout<<arr2[1];

    int n,m;
    cin>>n;
    int i,j,k;
    int arr2[20];
    for(i=0;i<20;i++)
    {
        arr2[i]=5;
    }

    for(i=0;i<n;i++)
    {
        cin>>m;
        j=0;
        for(;j<20;j++)
        {
            //cout<<arr2[j]<<" "<<j<<m<<endl;
            if(arr2[j]>=m)
            {
                arr2[j]=arr2[j]-m;
                break;
            }
        }

        if(j==20)
        {
            for(int k=0;i<100;k++)
            {
                if(arr1[k]==0)
                {
                    cout<<k+1<<" ";
                    arr1[k]=1;
                    m--;
                }
                if(m==0)
                {
                    break;
                }
            }
            break;
        }

        j=5*j;
        k=5;
        while(k--)
        {
            if(m==0)
            {
                break;
            }

            if(arr1[j]==0)
            {
                cout<<j+1<<" ";
                arr1[j]=1;
                m--;
            }
            j++;
        }
        cout<<endl;



    }




    return 0;
}
