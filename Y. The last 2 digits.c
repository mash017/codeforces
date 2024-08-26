#include<stdio.h>
int main()
{
    long long int a,b,c,d,result;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    result=a%100;
    result=(result*(b%100))%100;
    result=(result*(c%100))%100;
    result=(result*(d%100))%100;
    if(result==0)
    {
        printf("00\n");
    }
    else if(result<10)
    {
        printf("0%lld\n",result);
    }
    else
    {
        printf("%lld\n",result);
    }

    return 0;
}
