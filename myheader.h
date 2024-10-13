#include <stdio.h>
#include <stdlib.h>
#define maxSize 10
struct stack
{
  char item[maxSize];
  int top;
};
void initialize(struct stack *s)
{
  s->top = -1;
}
int isEmpty(struct stack *s)
{
  if (s->top == -1)
    return 1;
  else
    return 0;
}
void push(struct stack *s, char x)
{
  if (s->top == maxSize - 1)
  {
    printf("Stack Overflow");
    exit(1);
  }
  else
  {
    s->top++;
    s->item[s->top] = x;
  }
}
int pop(struct stack *s)
{
  if (isEmpty(s))
  {
    printf("Stack Underflow");
  }
  else
  {
    char x = s->item[s->top];
    s->top--;
    return x;
  }
  return 0;
}
int peek(struct stack *s)
{
  char x = s->item[s->top];
  return x;
}
