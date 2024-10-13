#include <stdio.h>
#include "myheader.h"
#include <ctype.h>
int postfixEvaluation(char str[])
{
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
      int b = pop(&opStack);
      int a = pop(&opStack);
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
  char str[] = "345*+7-";
  postfixEvaluation(str);
  return 0;
}