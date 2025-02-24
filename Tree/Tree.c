#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
  int data;
  struct node *left;
  struct node *right;
};
// ******************************************************************************
struct node *makeNode(int x)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = x;
  temp->left = NULL;
  temp->right = NULL;
  return temp;
}
// ******************************************************************************
int maxi(int x, int y)
{
  if (x > y)
  {
    return x;
  }
  else
  {
    return y;
  }
}
// ******************************************************************************
void preOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    printf("%d ", t->data);
    preOrderTraversal(t->left);
    preOrderTraversal(t->right);
  }
}
// ******************************************************************************
void inOrderTraversal(struct node *t)
{
  if (t != NULL)
  {

    inOrderTraversal(t->left);
    printf("%d ", t->data);
    inOrderTraversal(t->right);
  }
}
// ******************************************************************************
void postOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    postOrderTraversal(t->left);
    printf("%d ", t->data);
    postOrderTraversal(t->right);
  }
}
// ******************************************************************************
struct node *recursivebstInsert(struct node *t, int x)
{
  if (t == NULL)
  {
    t = makeNode(x);
  }
  else
  {
    if (x < t->data)
    {
      t->left = recursivebstInsert(t->left, x);
    }
    else
    {
      t->right = recursivebstInsert(t->right, x);
    }
  }
  return t;
}
// ******************************************************************************
int countNodes(struct node *t)
{
  if (t == NULL)
  {
    return 0;
  }
  else
  {
    return 1 + countNodes(t->left) + countNodes(t->right);
  }
}
// ******************************************************************************
int countLeefNodes(struct node *t)
{
  if (t == NULL)
    return 0;
  if (t->left == NULL && t->right == NULL)
    return 1;
  return countLeefNodes(t->left) + countLeefNodes(t->right);
}
// ******************************************************************************
int countN1(struct node *t)
{
  if (t == NULL)
    return 0;
  if (t->left == NULL && t->right == NULL)
    return 0;
  if (t->left != NULL && t->right != NULL)
    return countN1(t->left) + countN1(t->right);

  return 1 + countN1(t->left) + countN1(t->right);
}
// ******************************************************************************
int countN2(struct node *t)
{
  if (t == NULL)
    return 0;
  if (t->left == NULL && t->right == NULL)
    return 0;
  if (t->left != NULL && t->right != NULL)
  {
    return 1 + countN2(t->left) + countN2(t->right);
  }
  return countN2(t->left) + countN2(t->right);
}
// ******************************************************************************
int height(struct node *t)
{
  if (t == NULL)
    return 0;
  if (t->left == NULL && t->right == NULL)
    return 0;
  return 1 + maxi(height(t->left), height(t->right));
}
// ******************************************************************************
int sum(struct node *t)
{
  if (t == NULL)
    return 0;
  else
    return t->data + sum(t->left) + sum(t->right);
}
// ******************************************************************************
int isCompleteBT(struct node *t)
{
  return countNodes(t) == pow(2, height(t) + 1) - 1;
}
// ******************************************************************************
int isStrictlyCompleteBT(struct node *t)
{
  return countN1(t) == 0;
}
// ******************************************************************************
// int isStrictlyCompleteBTm2(struct node *t)
// {
//   if ()
// }
int main()
{
  struct node *root = NULL;
  root = recursivebstInsert(root, 100);
  root = recursivebstInsert(root, 80);
  root = recursivebstInsert(root, 200);
  root = recursivebstInsert(root, 10);
  root = recursivebstInsert(root, 60);
  root = recursivebstInsert(root, 150);
  preOrderTraversal(root);
  printf("\n");
  inOrderTraversal(root);
  printf("\n");
  postOrderTraversal(root);
  printf("\n");
  printf("%d\n", countNodes(root));
  printf("%d\n", countLeefNodes(root));
  printf("%d\n", countN1(root));
  printf("%d\n", countN2(root));
  printf("%d\n", height(root));
  printf("%d\n", sum(root));
  if (isCompleteBT(root))
    printf("yes its a complete binary tree\n");
  else
    printf("it is not a complete binary tree\n");
  if (isStrictlyCompleteBT(root))
    printf("yes its a complete binary tree\n");
  else
    printf("it is not a complete binary tree\n");
}