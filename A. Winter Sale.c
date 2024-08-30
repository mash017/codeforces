#include<stdio.h>
int main()
{
    double x,p;
    scanf("%lf%lf",&x,&p);
    float real=(100*p)/(100-x);
    printf("%.2f",real);
    return 0;
}
