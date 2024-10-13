#include <stdio.h>
int sumOfDigit(int n)
{
  if (n == 0)
    return 0;
  if (n > 0)
  {
    return n % 10 + sumOfDigit(n / 10);
  }
}
int main()
{
  int n;
  scanf("%d", &n);
  int x = sumOfDigit(n);
  printf("%d", x);
}