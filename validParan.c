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
int  parenthesis(char str[])
{
  struct stack s;
  initialize(s);
  int i=0;
  while(str[i]!=0)
{
  char x=str[i];
  if(x=='(')
  {
    push(x);
  }
  else{
    if(!isEmpty(s))
    {
      pop();
    }
    else{
      return 0;
    }
  }
  i++;
}
if(isEmpty(s))
{
  return 1;
}
else{
  return 0;
}

  
  
}

int main()
{
  char str[]="(()()";
  int res=parenthesis(str);
  if(res==1)
  printf("valid ");
  else
  printf("not valid");
}
