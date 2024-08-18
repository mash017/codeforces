#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    if(x>='0'&&x<='9')
    {
        printf("IS DIGIT\n");
    }
     else if((x>='A'&&x<='Z')||(x>='a'&&x<='z'))
    {
        printf("ALPHA\n");
    if(x>='A'&&x<='Z')
    {
        printf("IS CAPITAL\n");
    }
    else if(x>='a'&&x<='z')
    {
        printf("IS SMALL\n");
    }
}
return 0;
}
