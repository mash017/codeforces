#include<iostream>
using namespace std;
int main()
{
    int a[3],i,max,min;
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
      max=a[0];
      min=a[0];
      for(i=1;i<3;i++)
      {
          if(min>a[i])
            min=a[i];
      }
      for(i=1;i<3;i++)
      {
          if(max<a[i])
            max=a[i];
      }
      cout<<min<<" "<<max<<endl;
      return 0;
}
