#include<stdio.h>
int main()
{
    int y,x;
    scanf("%d",&x);
    if(999<x&&x<=9999)
    {
        y=x/1000;
        if(y%2==0)
        {
            printf("EVEN\n");
        }

        else
        {
          printf("ODD\n");
        }
    }
    return 0;
}


