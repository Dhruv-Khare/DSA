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
}

int main()
{
  //  char str[]="dhruv" ;

  initialize();
  push('A');
  push('B');
  push('C');
  push('D');
  push('E');
  push('F');
  char ans = pop();
  printf("%c", ans);

  return 0;
}
