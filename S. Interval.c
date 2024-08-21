#include<stdio.h>
int main()
{
    double x;
    scanf("%lf",&x);
    if(0<=x&&25>=x)
    {
        printf("Interval [0,25]\n");
    }
    else if(25<x&&50>=x)
    {
        printf("Interval (25,50]\n");
    }
     else if(50<x&&75>=x)
    {
        printf("Interval (50,75]\n");
    }
     else if(75<x&&100>=x)
    {
        printf("Interval (75,100]\n");
    }
    else
    {
        printf("Out of Intervals\n");
    }
    return 0;
}
