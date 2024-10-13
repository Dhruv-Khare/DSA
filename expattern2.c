#include <stdio.h>
int main()
{
  for (int i = 0; i < 5; i++)
  {
    int n = 1;
    for (int j = 0; j < i; j++)
    {
      printf("%d", n++);
    }
    printf("\n");
  }
  return 0;
}