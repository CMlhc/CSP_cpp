#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len=str.length();
    int i,num=0;
    for(i=0;i<len;i++)
    {
        num+=str[i]-'0';
    }

    cout<<num;



    return 0;
}
