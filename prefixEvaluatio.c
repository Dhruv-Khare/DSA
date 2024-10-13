#include <stdio.h>
#include "myheader.h"
#include <ctype.h>
#include <string.h>
int prefixEvaluation(char str[])
{
  strrev(str);
  struct stack opStack;
  initialize(&opStack);
  int i = 0;
  while (str[i] != '\0')
  {
    char symbol = str[i];
    if (isdigit(symbol))
    {
      push(&opStack, symbol - '0');
    }
    else
    {
      int a = pop(&opStack);
      int b = pop(&opStack);
      int value;
      switch (symbol)
      {
      case '+':
        value = a + b;
        break;
      case '-':
        value = a - b;
        break;
      case '*':
        value = a * b;
        break;
      case '/':
        value = a / b;
        break;
      case '%':
        value = a % b;
        break;
      default:
        printf("Invalid operator!\n");
        exit(1);
        break;
      }
      push(&opStack, value);
    }
    i++;
  }
  printf("%d", pop(&opStack));
  return 0;
}
int main()
{
  char str[] = "+-*+7839+26";
  prefixEvaluation(str);
  return 0;
}