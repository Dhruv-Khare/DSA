#include<stdio.h>
#include<stdlib.h>
#define MAXQUEUE 10
#define TRUE 1
#define FALSE 0
struct queue {
  int rear;
  int front;
  int item[MAXQUEUE];
};
struct queue q;
void initialize()
{
  q.rear=-1;
  q.front=0;
}
// ***************************
int isEmpty()
{
  if(q.rear-q.front+1==0)
  return TRUE;
  else
  return FALSE;
}
// ***************************
void enQueue(int x)
{
  if(q.rear==MAXQUEUE-1)
  {
    printf("stack overflows");
    exit(1);
  }
  else{
    q.rear=q.rear+1;
    q.item[q.rear]=x;
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
    
    x=q.item[q.front++];
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
  enQueue(10);
  enQueue(11);
  // int x=deQueue();
  // printf("%d\n",x);
  // x=deQueue();
  // printf("%d\n",x);x=deQueue();
  // printf("%d\n",x);x=deQueue();
  // printf("%d\n",x);x=deQueue();
  // printf("%d\n",x);x=deQueue();
  // printf("%d\n",x);
  return 0;
}