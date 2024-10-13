#include <stdio.h>
#include <stdlib.h>
#include "myheader.h"
#define maxSize 10
char dat[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
void decToAnyBase(int n, int b)
{
  struct stack s;
  initialize(&s);
  int r;
  while (n != 0)
  {
    r = n % b;
    push(&s, r);
    n = n / b;
  }
  while (!isEmpty(&s))
  {
    int x = pop(&s);

    printf("%c", dat[x]);
  }
}
int main()
{
  int n, b;
  scanf("%d%d", &n, &b);
  decToAnyBase(n, b);
  return 0;
}