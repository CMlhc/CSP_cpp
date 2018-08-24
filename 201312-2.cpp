#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int i;
    int sum=0,cnt=1;

    for(i=0;i<=10;i++)
    {
        if(str[i]=='-')
        {
            continue;
        }

        sum+=(str[i]-'0')*cnt;
        cnt++;
    }

    sum=sum%11;
    if(sum==10)
    {
        if(str[12]=='X')
        {
            cout<<"Right";
        }else
        {
            for(i=0;i<12;i++)
            {
                cout<<str[i];
            }
            cout<<"X";
        }
    }else
    {
        if((str[12]-'0')==sum)
        {
            cout<<"Right";
        }else
        {
            for(i=0;i<12;i++)
            {
                cout<<str[i];
            }
            cout<<sum;
        }
    }


    return 0;
}
