#include<stdio.h>
int main()
{
 int x;
 long long int y;
 char a;
 float m;
 double n;
scanf("%d %lld %c %f %lf", &x, &y, &a, &m, &n);
printf("%d\n",x);
printf("%lld\n",y);
printf("%c\n",a);
printf("%.2f\n",m);
printf("%f\n",n);
 return 0;
}
