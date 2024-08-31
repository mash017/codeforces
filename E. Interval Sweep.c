#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if((a+1==b)||(b+1==a))
        printf("YES\n");
    else if(a==b&&a!=0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
