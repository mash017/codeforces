#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='a'&&a<='z')
       {
         a=toupper(a);
         printf("%C",a);
       }
    else if(a>='A'&&a<='Z')
    {
        a=tolower(a);
        printf("%C",a);
    }
    return 0;
}
