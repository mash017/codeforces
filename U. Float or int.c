#include<stdio.h>
int main()
{
    int num;
    double n,dec;
    scanf("%lf",&n);
    num=n;
    dec=n-num;
    if(dec==0.0)
    {
        printf("int %d",num);
    }
    else
    {
        printf("float %d %.3f\n",num,dec);
    }
    return 0;
}
