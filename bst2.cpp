#include <iostream>
using namespace std;

struct node
{
  int data;
  struct node *left;
  struct node *right;
  struct node *father;
};
// *****************************************************************************************
struct node *makeNode(int x)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = x;
  temp->left = NULL;
  temp->right = NULL;
  temp->father = NULL;

  return temp;
}
// *****************************************************************************************
struct node *bstInsert(struct node *root, int x)
{
  struct node *r = makeNode(x);
  if (root == NULL)
  {
    root = r;
    return r;
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
      q->left = r;
    else
      q->right = r;
    r->father = q;
    return root;
  }
}
// *****************************************************************************************
bool isLeft(struct node* p)
{
  if(p->father!=NULL)
  {
    struct node* q=p->father;
    if(q->left==p)
    {
      return true;
    }
    else 
      return false;
  }
  else 
    return false;
}
// *****************************************************************************************
bool isRight(struct node* p)
{
  if(p->father!=NULL)
  {
    struct node* q=p->father;
    if(q->right==p)
    {
      return true;
    }
    else 
    return false;
  }
  else 
    return false;
}
// *****************************************************************************************
void inOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    inOrderTraversal(t->left);
   cout<<t->data<<' ';
    inOrderTraversal(t->right);
  }
}
// *****************************************************************************************
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
// *****************************************************************************************
struct node *mini(struct node *root)
{
  struct node *p = root;
  while (p->left != NULL)
  {
    p = p->left;
  }
  return p;
}
// *****************************************************************************************
struct node* succersor(struct node* p)
{
  if(p==NULL)
  {
    return NULL;
  }
  if(p->right!=NULL)
  {
    return mini(p->right);
  }
  else{
    struct node* q=p->father;
    while(q!=NULL&&q->right==p)
    {
      p=q;
      q=q->father;
    }
    return q;
  }
}
// *****************************************************************************************
struct node *maxi(struct node *root)
{
  struct node *p = root;
  while (p->right != NULL)
  {
    p = p->right;
  }
  return p;
}
// *****************************************************************************************
struct node* predecessor(struct node* p)
{
  if(p==NULL)
  {
    return NULL;
  }
  if(p->left!=NULL)
  {
    return maxi(p->left);
  }
  else{
    struct node* q=p->father;
    while(q!=NULL&&q->left==p)
    {
      p=q;
      q=q->father;
    }
    return q;
  }
}
// *****************************************************************************************
int bstDelete(struct node* &t, struct node* p)
 {
    if (p == NULL) return -1; 

    struct node* q = p->father;
    // Case 1: Node with 0 children
    if (p->left == NULL && p->right == NULL) {
        if (q != NULL) {
            if (isLeft(p))
                q->left = NULL;
            else
                q->right = NULL;
        } else {
            t = NULL; 
        }
        int x = p->data;
        delete p;
        return x;
    }

    // Case 2: Node with 1 child
    if (p->left == NULL || p->right == NULL) {
        struct node* r = (p->left) ? p->left : p->right; 
        if (q != NULL) {
            if (isLeft(p))
                q->left = r;
            else
                q->right = r;
        } else {
            t = r; 
        }
        r->father = q;
        int d = p->data;
        delete p;
        return d;
    }

    // Case 3: Node with 2 children
    struct node* w = succersor(p); 
    if (w != NULL) {
        int y = bstDelete(t, w);
        int x = p->data;
        p->data = y; 
        return x;
    }

    return p->data; 
}
// *****************************************************************************************
int main()
{
  struct node* root=NULL;
  root=bstInsert(root,100);
  root=bstInsert(root,90);
  root=bstInsert(root,110);
  root=bstInsert(root,10);
  root=bstInsert(root,80);
  root=bstInsert(root,105);
  root=bstInsert(root,120);
  inOrderTraversal( root);
  cout<<"\n";
  struct node* x=bstSearch(root,110);
  struct node* res=succersor(x);
  cout<<isLeft(x)<<"\n";
  cout<<isRight(x)<<"\n";
  cout<<res->data<<"\n";
  struct node* res2=predecessor(x);
  cout<<res2->data<<"\n";
  int s=bstDelete(root,x);
  cout<<s<<'\n';
  inOrderTraversal( root);

}
