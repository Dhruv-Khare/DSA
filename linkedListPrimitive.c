#include <stdio.h>
#include <stdlib.h>
struct node
{
  int info;
  struct node *next;
};
// ************************************
struct node *getNode(void)
{
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node *));
  return p;
}

// ****************************************
void insBeg(struct node **start, int x)
{
  struct node *p;
  p = getNode();
  p->info = x;
  p->next = *start;
  *start = p;
}
// ******************************************
void traversal(struct node *start)
{
  struct node *p = start;
  while (p != NULL)
  {
    printf("%d\t", p->info);
    p = p->next;
  }
  printf("\n");
}
// ***********************************************
void insEnd(struct node **start, int x)
{
  struct node *Q = *start;
  while (Q->next != NULL)
  {
    Q = Q->next;
  }
  struct node *p = getNode();
  p->info = x;
  p->next = NULL;
  Q->next = p;
}
// *******************************************************
void insAft(struct node **p, int x)
{
  if (*p == NULL)
  {
    printf("Error: Q is NULL\n");
    return;
  }
  struct node *q, *r;

  q->info = x;
  r = (*p)->next;
  (*p)->next = (q);
  q->next = r;
}
int main()
{
  struct node *start;
  insBeg(&start, 10);
  insBeg(&start, 20);
  insBeg(&start, 30);
  insBeg(&start, 40);
  insBeg(&start, 50);
  insBeg(&start, 60);
  insBeg(&start, 70);
  insBeg(&start, 80);
  insBeg(&start, 90);
  insEnd(&start, 100);
  traversal(start);
}