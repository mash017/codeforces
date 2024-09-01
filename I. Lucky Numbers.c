#include<stdio.h>
int main()
{
    int a,mod,de;
    scanf("%d",&a);
    de=a/10;
    mod=a%10;
    if(mod%de==0||de%mod==0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
