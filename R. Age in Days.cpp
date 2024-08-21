#include<iostream>
using namespace std;
int main()
{
     int x,day,month;
     cin>>x;
     cout<<x/365<<" years"<<endl;
     month=x%365;
     cout<<month/30<<" months"<<endl;
     day=month%30;
     cout<<day<<" days"<<endl;
     return 0;
}
