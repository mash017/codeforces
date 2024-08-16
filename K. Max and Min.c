#include<stdio.h>
int main()
{
  int a[3],max,i,min;
  for(i=0;i<3;i++){
  scanf("%d",&a[i]);}
  
  max=a[0];
  min=a[0];
  for(i=1;i<3;i++)
  {
   if(min>a[i])
   min= a[i];
  }
  for(i=1;i<3;i++)
  {
   if(max<a[i])
   max=a[i];
  }
  
  printf("%d %d\n",min,max);
  return 0;
} 
