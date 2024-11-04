#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10
#define TRUE 1
#define FALSE 0
struct cqueue {
  int rear;
  int front;
  int item[MAXQUEUE];
};
struct cqueue cq;
void initialize()
{
  cq.rear=5;
  cq.front=5;
}
// ***************************
int isEmpty()
{
  if(cq.rear==cq.front)
  return TRUE;
  else
  return FALSE;
}
// ***************************
void enQueue(int x)
{
  if((cq.rear+1)%MAXQUEUE==cq.front)
  {
    printf("stack overflows");
    exit(1);
  }
  else{
    cq.rear=(cq.rear+1)%MAXQUEUE;
    cq.item[cq.rear]=x;
  }
}
// *********************************
int deQueue()
{
  int x;
  if(isEmpty())
  {
    printf("stack underflows");
    exit(1);
  }
  else{
    cq.front=(cq.front+1)%MAXQUEUE;
    x=cq.item[cq.front];
    return x;
  }
  return 0;
}
// ****************************************


int main()
{
  initialize();
  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);
  enQueue(6);
  enQueue(7);
  enQueue(8);
  enQueue(9);
  int x=deQueue();
  printf("%d\n",x);
  x=deQueue();
  printf("%d\n",x);x=deQueue();
  printf("%d\n",x);x=deQueue();
  printf("%d\n",x);x=deQueue();
  printf("%d\n",x);x=deQueue();
  printf("%d\n",x);
  return 0;
}