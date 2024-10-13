#include <stdio.h>
#include <stdlib.h>
#define maxSize 10
struct stack
{
  char item[maxSize];
  int top;
};
struct stack s;
void initialize()
{
  s.top = -1;
}
int isEmpty()
{
  if (s.top == -1)
    return 1;
  else
    return 0;
}
void push(char x)
{
  if (s.top == maxSize - 1)
  {
    printf("Stack Overflow");
    exit(1);
  }
  else
  {
    s.top++;
    s.item[s.top] = x;
  }
}
int pop()
{
  if (isEmpty(s))
  {
    printf("Stack Underflow");
  }
  else
  {
    char x = s.item[s.top];
    s.top--;
    return x;
  }
  return 0;
}
void reverse(char str[])
{
  initialize();
  for (int i = 0; str[i] != '\0'; i++)
  {
    push(str[i]);
  }
  while (!isEmpty(s))
  {
    char ans = pop(s);
    printf("%c", ans);
  }
}
int main()
{
  char str[] = "dhruv";
  reverse(str);
  return 0;
}
