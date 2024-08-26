#include<iostream>
using namespace std;
int main()
{
    int temp,i,j,a[3],b[3];
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<3;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<3;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<endl;
    for(i=0;i<3;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0;
}

