#include <stdio.h>
long long int power(long long int a, long long int n)
{
  if (n == 0)
    return 1;
  else
  {
    long long int x = power(a, n / 2);
    if (n % 2 == 0)
      return x * x;
    else
      return a * x * x;
  }
}
int main()
{
  long long int a, n;
  scanf("%lld%lld", &a, &n);
  long long int x = power(a, n);
  printf("%lld", x);
}