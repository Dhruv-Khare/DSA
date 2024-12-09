#include <stdio.h>
#include <stdlib.h>

struct node
{
  int info;
  struct node *next;
};

struct node *getNode()
{
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  return p;
}

struct node *insBeg(struct node *start, int x)
{
  struct node *p;
  p = getNode();
  p->info = x;
  p->next = start;
  start = p;
  return p;
}

void traverse(struct node *start)
{
  struct node *p = start;
  while (p != NULL)
  {
    printf("%d ", p->info);
    p = p->next;
  }
  printf("\n");
}

struct node *concatenate(struct node *start1, struct node *start2)
{
  if (start1 == NULL)
  {
    return start2;
  }
  struct node *p = start1;
  while (p->next != NULL)
  {
    p = p->next;
  }
  p->next = start2;
  return start1;
}

int main()
{
  struct node *start1 = NULL;
  struct node *start2 = NULL;
  start1 = insBeg(start1, 1);
  start1 = insBeg(start1, 2);
  start1 = insBeg(start1, 3);
  start1 = insBeg(start1, 4);
  printf("List 1: ");
  traverse(start1);
  start2 = insBeg(start2, 5);
  start2 = insBeg(start2, 6);
  start2 = insBeg(start2, 7);
  start2 = insBeg(start2, 8);
  printf("List 2: ");
  traverse(start2);
  printf("Concatenated List: ");
  start1 = concatenate(start1, start2);
  traverse(start1);
  return 0;
}