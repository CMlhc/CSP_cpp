#include<bits/stdc++.h>
using namespace std;

int main()
{
    int yue1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int yue2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int yue1_num[12];
    int yue2_num[12];
    memset(yue1_num,0,sizeof(yue1_num));
    memset(yue2_num,0,sizeof(yue2_num));
    int i;
    int num1=yue1[0],num2=yue2[0];
    yue1_num[0]=yue1[0];
    yue2_num[0]=yue2[0];
    for(i=1;i<12;i++)
    {
        num1+=yue1[i];
        num2+=yue2[i];

        yue1_num[i]=num1;
        yue2_num[i]=num2;
    }

    int year,day;
    cin>>year>>day;

    if((year%4==0 && year%100!=0)||(year%400==0))
    {
        for(i=0;i<12;i++)
        {
            if(yue2_num[i]>=day)
            {
                break;
            }
        }
        cout<<i+1<<endl;
        if(i==0)
        {
            cout<<day<<endl;
        }else
        {
            cout<<day-yue2_num[i-1]<<endl;
        }
    }else
    {
        for(i=0;i<12;i++)
        {
            if(yue1_num[i]>=day)
            {
                break;
            }
        }
        cout<<i+1<<endl;
        if(i==0)
        {
            cout<<day<<endl;
        }else
        {
            cout<<day-yue1_num[i-1]<<endl;
        }
    }


    return 0;
}
