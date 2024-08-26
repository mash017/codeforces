#include<iostream>
using namespace std;
int main()
{
    double n,dec;
    int num;
    cin>>n;
    num=n;
    dec=n-num;
    if(dec==0.0)
    {
        cout<<"int "<<num<<endl;
    }
    else
    {
        cout<<"float "<<num<<" "<<dec<<endl;
    }
    return 0;
}
