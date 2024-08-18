#include<stdio.h>
int main()
{
    char f1[100],s1[100],f2[100],s2[100];
    scanf("%s%s",f1,s1);
    scanf("%s%s",f2,s2);
    int d=strcmp(s1,s2);
    if(d==0)
    {
        printf("ARE Brothers\n");
    }
    else
    {
        printf("NOT\n");
    }
    return 0;
}
