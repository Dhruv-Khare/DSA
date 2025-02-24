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
void preOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    printf("%d ", t->data);
    preOrderTraversal(t->left);
    preOrderTraversal(t->right);
  }
}
void postOrderTraversal(struct node *t)
{
  if (t != NULL)
  {

    preOrderTraversal(t->left);
    preOrderTraversal(t->right);
    printf("%d ", t->data);
  }
}
void inOrderTraversal(struct node *t)
{
  if (t != NULL)
  {

    preOrderTraversal(t->left);
    printf("%d ", t->data);
    preOrderTraversal(t->right);
  }
}
int countNode(struct node *t)
{
  int c = 0;
  if (t == NULL)
  {
    return 0;
  }
  else
  {

    c = countNode(t->left) + countNode(t->right) + 1;
  }
  return c;
}
int countOfLeefNodes(struct node *t)
{
  int c = 0;
  if (t == NULL)
  {
    return 0;
  }
  else
  {

    if (t->left == NULL && t->right == NULL)
    {
      return 1;
    }
    else
    {
      return c = countOfLeefNodes(t->left) + countOfLeefNodes(t->right);
    }
  }
}
int main()
{
  struct node *root;
  root = makeNode(1);
  root->left = makeNode(2);
  root->right = makeNode(3);
  root->left->right = makeNode(6);
  root->right->left = makeNode(4);
  root->right->right = makeNode(5);
  preOrderTraversal(root);
  printf("\n\n");
  postOrderTraversal(root);
  printf("\n\n");
  inOrderTraversal(root);
  printf("\n\n");
  printf("%d\n", countNode(root));
  printf("%d", countOfLeefNodes(root));
}