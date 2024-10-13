#include<stdio.h>
int triangularNumber(int n)
{
  if(n==1)
  return 1;
  else
  return n+triangularNumber(n-1);
}
int main()
{
  int n;
  scanf("%d",&n);
  int x=triangularNumber(n);
  printf("%d",x);
}