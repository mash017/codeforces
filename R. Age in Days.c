#include<stdio.h>
int main()
{
    int n,month,day;
    scanf("%d",&n);
    printf("%d years\n",n/365);
    month=n%365;
    printf("%d months\n",month/30);
    day=month%30;
    printf("%d days\n",day);
    return 0;

}
