#include <stdio.h>
int main()
{
  char ch = 'E';
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    int j;
    for (j = 1; j <= i; j++)
    {
      printf("%c", ch);
      ch++;
    }
    ch = ch - j;
    printf("\n");
  }
}