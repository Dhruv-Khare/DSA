#include<stdio.h>
#include<stdlib.h>
 struct node
{
  int coef;
  int exp;
  struct node *next;
};
struct node *getNode()
{
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node *));
  return p;
}
struct node *insBeg(struct node *start, int c,int e)
{
  struct node *p;
  p = getNode();
  p->coef = c;
  p->exp = e;
  p->next = start;
  start = p;
  return p;
}
void traverse(struct node *start)
{
  struct node *p;
  while (p != NULL)
  {
    printf("%dx^%d+ ", p->coef,p->exp);
    p = p->next;
  }
}
struct node*polyadd(struct node*p1,struct node*p2)
{
  struct node*p,*q,*p3;
  p=p1;
  q=p2;
  while(p!=NULL&&q!=NULL)
  {
    if(p->exp==q->exp)
    {
      p3=insBeg(p3,p->coef+q->coef,p->exp);
      p=p->next;
      q=q->next;
    }
    else{
      if(p->exp>q->exp)
      {
        p3=insBeg(p3,p->coef,p->exp);
        p=p->next;

      }
      else{
         p3=insBeg(p3,q->coef,q->exp);
        q=q->next;
      }
    }
  
  }
  while(p!=NULL)
  {
     p3=insBeg(p3,p->coef,p->exp);
        p=p->next;
  }
  while(p!=NULL)
  {
     p3=insBeg(p3,q->coef,q->exp);
        q=q->next;
  }
  return p3;
}
// struct node *concatenate(struct node *start1, struct node *start2)
// {
//   struct node *p = start1;
//   while (p->next != NULL)
//   {
//     p = p->next;
//   }
//   p->next = start2;
//   return start1;
// }


