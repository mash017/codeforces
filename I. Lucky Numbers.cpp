#include<iostream>
using namespace std;
int main()
{
    int a,mod,de;
    cin>>a;
    de=a/10;
    mod=a%10;
    if(mod%de==0||de%mod==0)
      {
        cout<<"YES"<<endl;
      }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
