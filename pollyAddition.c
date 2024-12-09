#include <stdio.h>
#include <stdlib.h>

struct node
{
  int coef;
  int exp;
  struct node *next;
};

struct node *getNode()
{
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  return p;
}

struct node *insBeg(struct node *start, int c, int e)
{
  struct node *p;
  p = getNode();
  p->coef = c;
  p->exp = e;
  p->next = start;
  start = p;
  return p;
}

struct node *insEnd(struct node *start, int c, int e)
{
  struct node *p, *q;
  p = start;
  q = getNode();
  q->coef = c;
  q->exp = e;
  q->next = NULL;
  if (start == NULL)
  {
    start = q;
  }
  else
  {
    while (p->next != NULL)
    {
      p = p->next;
    }
    p->next = q;
  }
  return start;
}

void traverse(struct node *start)
{
  struct node *p = start;
  while (p != NULL)
  {
    printf("%dx^%d+ ", p->coef, p->exp);
    p = p->next;
  }
}

struct node *polyadd(struct node *p1, struct node *p2)
{
  struct node *p, *q, *p3;
  p = p1;
  q = p2;
  p3 = NULL;
  while (p != NULL && q != NULL)
  {
    if (p->exp == q->exp)
    {
      p3 = insEnd(p3, p->coef + q->coef, p->exp);
      p = p->next;
      q = q->next;
    }
    else
    {
      if (p->exp > q->exp)
      {
        p3 = insEnd(p3, p->coef, p->exp);
        p = p->next;
      }
      else
      {
        p3 = insEnd(p3, q->coef, q->exp);
        q = q->next;
      }
    }
  }
  while (p != NULL)
  {
    p3 = insEnd(p3, p->coef, p->exp);
    p = p->next;
  }
  while (q != NULL)
  {
    p3 = insEnd(p3, q->coef, q->exp);
    q = q->next;
  }
  return p3;
}

int main()
{
  struct node *p1, *p2, *p3;
  p1 = NULL;
  p2 = NULL;
  p3 = NULL;
  p1 = insEnd(p1, 3, 7);
  p1 = insEnd(p1, 4, 6);
  p1 = insEnd(p1, -5, 4);
  p1 = insEnd(p1, 1, 2);
  p1 = insEnd(p1, -9, 0);

  printf("Polynomial 1: ");
  traverse(p1);
  printf("\n");
  p2 = insEnd(p2, 2, 6);
  p2 = insEnd(p2, 1, 5);
  p2 = insEnd(p2, -3, 4);
  p2 = insEnd(p2, 2, 3);
  p2 = insEnd(p2, 3, 2);
  p2 = insEnd(p2, -2, 0);

  printf("Polynomial 2: ");
  traverse(p2);
  printf("\n");
  p3 = polyadd(p1, p2);
  printf("Resultant Polynomial: ");
  traverse(p3);
}