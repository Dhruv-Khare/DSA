#include<stdio.h>
int main()
{
  double a[2]={20.0,25.0},*p,*q;
  p=a;
  q=p+1;
  printf("%d,%d",(int)(q-p),(int)(*q-*p));
  return 0;
}