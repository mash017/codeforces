#include<iostream>
using namespace std;
int main()
{
    long long int a,b,c,d,result;
    cin>>a>>b>>c>>d;
    result=a%100;
    result=(result*(b%100))%100;
    result=(result*(c%100))%100;
    result=(result*(d%100))%100;
    if(result==0)
    {
        cout<<"00"<<endl;
    }
    else if(result<10)
    {
        cout<<"0"<<result<<endl;
    }
    else
    {
        cout<<result<<endl;
    }
    return 0;
}
