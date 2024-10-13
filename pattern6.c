#include <stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    for (int j = n - i; j >= 0; j--)
    {
      printf(" ");
    }
    int x = i;
    for (int k = 1; k <= i; k++)
    {
      printf("%d", x++);
    }
    x -= 2;
    for (int l = 1; l <= i - 1; l++)
    {
      printf("%d", x--);
    }
    printf("\n");
  }
  return 0;
}