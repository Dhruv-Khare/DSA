#include <stdio.h>
int main()
{
  int m[6][7] = {0};
  m[0][5] = 1;
  for (int i = 1; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      m[i][j] = m[i - 1][j] + m[i - 1][j + 1];
    }
  }
  for (int i = 0; i < 6; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      if (m[i][j] != 0)
      {
        printf("%d", m[i][j]);
        printf(" ");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}