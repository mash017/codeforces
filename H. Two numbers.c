#include<stdio.h>
int main()
{
    int a,b,ru,fl,cl;
    scanf("%d%d",&a,&b);
    fl=floor((double) a/b);
    cl=ceil((double) a/b);
    ru=round((double) a/b);
    printf("floor %d / %d = %d\n",a,b,fl);
    printf("ceil %d / %d = %d\n",a,b,cl);
    printf("round %d / %d = %d\n",a,b,ru);
    return 0;
}
