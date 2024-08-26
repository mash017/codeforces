#include<stdio.h>
int main()
{
    int a[3],b[3],i,j,temp;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
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
        printf("%d\n",a[i]);
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%d\n",b[i]);
    }
    return 0;
}

