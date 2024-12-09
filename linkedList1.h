#include<stdio.h>
#include<stdlib.h>
struct node{
   int info;
   struct node *next;
};
// ************************************
struct node* getNode(void)
{
  struct node * p;
  p=(struct node*)malloc(sizeof(struct node*));
  return p;
}
// ******************************************************

void insBeg(struct node** start,int x)
{
    struct node* p;
    p=getNode();
    p->info=x;
    p->next=*start;
    *start=p;
}
// Function to concatenate two linked lists
struct node* concatination(struct node** start1, struct node** start2) {
    if (*start1 == NULL && *start2 == NULL) {
        return NULL;
    } else if (*start1 == NULL) {
        return *start2;
    } else if (*start2 == NULL) {
        return *start1;
    } else {
        struct node* p = *start1;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = *start2;
        return *start1;
    }
}
// Function to traverse a linked list
void traversal(struct node* start) {
    struct node* p = start;
    while (p != NULL) {
        printf("%d\t", p->info);
        p = p->next;
    }
    printf("\n");
}
struct node* start;
// ************************************************
void insAft(struct node* Q,int x)
{
   if (Q == NULL) {
        printf("Error: Q is NULL\n");
        return;
    }
    struct node * p=getNode();
    p->info=x;
    p->next=Q->next;
    Q->next=p;
}
// **********************************************************************
// void traverse(struct node** start )
// {
//   struct node *p;
//   p=*start;
//   while(p!=NULL)
//   {
//     printf("%d\t",p->info);
//     p=p->next;
//   }
// }
// **********************************************************************
int countNode()
{
  struct node* p=start;
  int c=0;
  while(p!=0)
  {
    c++;
    p=p->next;
  }
  return c;
}
// *****************************************************
void insEnd(int x)
{
  struct node *Q=start;
  while(Q->next!=NULL)
  {
    Q=Q->next;
  }
  struct node* p=getNode();
  p->info=x;
  p->next=NULL;
  Q->next=p;
}
// ******************************************************
void pairWiseSwap()
{
  struct node*p=start;
  struct node *Q=start->next;
  while(p!=NULL&&Q!=NULL)
  {
    // swap(p->info,Q->info);
    int t=p->info;
    p->info=Q->info;
    Q->info=t;
    p=p->next;
    p=p->next;
    Q=Q->next;
    if(Q!=NULL)
    {
      Q=Q->next;
    }
  }
}
// ************************************************************
void reverse()
{
  struct node* prev=NULL;
  struct node* curr=start;
  struct node* next=start->next;
  while(curr!=NULL)
  {
    curr->next=prev;
    prev=curr;
    curr=next;
    if(next!=NULL)
    {
      next=next->next;
    }
  }
  start=prev;
}
// ***********************************************************
void  reverseTraverse(struct node*start)
{
  if(start!=NULL)
  {
    reverseTraverse(start->next);
    printf("%d\t",start->info);
  }
}
// ****************************************************************
// int main()
// {
  
//   insBeg(10);
//   insBeg(20);
//   insBeg(30);
//   insBeg(40);
//   insBeg(50);
//   insBeg(60);
//   insBeg(70);
//   // insEnd(100);
//   // insEnd(200);
//   // insEnd(300);
//   // insEnd(400);
//   // insEnd(500);
//   // insAft(start->next->next,10);
//   // traverse();
//   // int c=countNode();
//   // printf("\n%d\n",c);
//   // pairWiseSwap();
//   // traverse();
//   // printf("\n");
//   // reverse();
//   // traverse();

//   reverseTraverse(start);
//   return 0;
// }