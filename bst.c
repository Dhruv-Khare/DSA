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

struct node *bstInsert(struct node *root, int x)
{
  if (root == NULL)
  {
    root = makeNode(x);
    return root;
  }
  else
  {
    struct node *p = root;
    struct node *q = NULL;
    while (p != NULL)
    {
      q = p;
      if (x < p->data)
      {
        p = p->left;
      }
      else
      {
        p = p->right;
      }
    }
    if (x < q->data)
      q->left = makeNode(x);
    else
      q->right = makeNode(x);

    return root;
  }
}
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

void inOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    inOrderTraversal(t->left);
    printf("%d ", t->data);
    inOrderTraversal(t->right);
  }
}
struct node *mini(struct node *root)
{
  struct node *p = root;
  while (p->left != NULL)
  {
    p = p->left;
  }
  return p;
}
struct node *maxi(struct node *root)
{
  struct node *p = root;
  while (p->right != NULL)
  {
    p = p->right;
  }
  return p;
}
struct node *bstSearch(struct node *root, int x)
{
  struct node *p = root;
  while (p != NULL)
  {
    if (p->data == x)
      return p;
    else
    {
      if (x < p->data)
        p = p->left;
      else
        p = p->right;
    }
  }
  return NULL;
}
struct node *recursivebstSearch(struct node *root, int x)
{

  if (root != NULL)
  {
    if (root->data == x)
      return root;
    else
    {
      if (x < root->data)
        recursivebstSearch(root->left, x);
      else
        recursivebstSearch(root->right, x);
    }
  }
  return NULL;
}
int main()
{
  struct node *root = NULL;
  root = bstInsert(root, 100);
  root = bstInsert(root, 10);
  root = bstInsert(root, 50);
  root = bstInsert(root, 40);
  root = bstInsert(root, 45);
  root = bstInsert(root, 110);
  root = bstInsert(root, 120);
  root = recursivebstInsert(root, 150);
  inOrderTraversal(root);
  struct node *minNode = mini(root);
  struct node *maxNode = maxi(root);
  printf("\n%d %d\n", minNode->data, maxNode->data);
  struct node *p = bstSearch(root, 100);
  printf("%d\n", p->data);
  struct node *q = recursivebstSearch(root, 100);
  printf("%d", q->data);
}