#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node *left;
  struct node *right;
};

struct node *makeNode(int x)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = x;
  temp->left = NULL;
  temp->right = NULL;

  return temp;
}
void createTree(struct node **t)
{
  int choice, x;
  struct node *p;
  if ((*t) == NULL)
  {
    printf("Enter the root Node: ");
    scanf("%d", &x);
    p = makeNode(x);
    (*t) = p;
    createTree(&p);
  }
  else
  {
    printf("Does the left node of %d exist? (1/0): ", (*t)->data);
    scanf("%d", &choice);
    if (choice)
    {
      printf("Enter the data of left node: ");
      scanf("%d", &x);
      p = makeNode(x);
      (*t)->left = p;
      createTree(&p);
    }
    printf("Does the right node of %d exist? (1/0): ", (*t)->data);
    scanf("%d", &choice);
    if (choice)
    {
      printf("Enter the data of right node: ");
      scanf("%d", &x);
      p = makeNode(x);
      (*t)->right = p;
      createTree(&p);
    }
  }
}
void inOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    inOrderTraversal(t->left);
    printf("%d ", t->data);
    inOrderTraversal(t->right);
  }
}
int main()
{
  struct node *root = NULL;

  createTree(&root);
  inOrderTraversal(root);
}