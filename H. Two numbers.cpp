#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,ru,fl,cl;
    cin>>a>>b;
    fl=floor((double) a/b);
    cl=ceil((double) a/b);
    ru=round((double) a/b);
    cout<<"floor "<<a<<" / "<<b<<" = "<<fl<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<cl<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<ru<<endl;
    return 0;
}
