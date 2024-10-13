#include <stdio.h>
int dat[1001] = {0};
long long int fib(int n)
{
  if (n < 2)
    return n;
  else
  {
    if (dat[n] == 0)
      dat[n] = fib(n - 1) + fib(n - 2);
    return dat[n];
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    long long int res = fib(i);
    printf(" %d->%d", i, res);
  }
  return 0;
}