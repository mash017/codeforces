#include<stdio.h>
int main()
{
    int a,b,c;
    char s,q;
    scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
    if(a+b==c)
    {
        printf("Yes\n");
    }
    else if(a-b==c)
    {
        printf("Yes\n");
    }
    else if(a*b==c)
    {
        printf("Yes\n");
    }
    else if(s=='+')
    {
        printf("%d",a+b);
    }
      else if(s=='-')
    {
        printf("%d",a-b);
    }
      else if(s=='*')
    {
        printf("%d",a*b);
    }
    return 0;
}
