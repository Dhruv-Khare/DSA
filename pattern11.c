#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      printf("%d", j);
    }
    for (int k = 2 * (n - i) - 1; k >= 0; k--)
    {
      printf(" ");
    }
    for (int j = i; j > 0; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}