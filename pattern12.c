#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 0; i <= n; i++)
  {
    for (int j = 1; j <= n - i + 1; j++)
    {
      printf("%d", j);
    }
    for (int k = 1; k < 2 * i + 1; k++)
    {
      printf(" ");
    }
    for (int j = n - i + 1; j > 0; j--)
    {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}