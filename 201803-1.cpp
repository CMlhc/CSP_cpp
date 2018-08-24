#include<bits/stdc++.h>
using namespace std;


int main()
{
    int flage=0;
    int n;
    cin>>n;
    int total=0;

    int num=2;
    while(n)
    {

        if(n==1)
        {
            total++;
            num=2;
        }else if(n==2)
        {
            total=total+num;
            num=num+2;
        }



        cin>>n;
    }

    cout<<total;




    return 0;
}
