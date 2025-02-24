#include<iostream>
using namespace std;
struct node {
  int data;
  struct node* left;
  struct node* right;
  int height;
};
struct node *makeNode(int x)
{
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->data = x;
  temp->left = NULL;
  temp->right = NULL;
  temp->height=1;
  

  return temp;
}
int getHeight(struct node* t) {
    return t == NULL ? 0 : t->height;
}
int balance(struct node* t) {
    return getHeight(t->left) - getHeight(t->right);
}
struct node* rotateLeft(struct node* x)
{
  struct node* y=x->right;
  struct node* w=y->left;
  y->left=x;
  x->right=w;
    x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
  return y;
}
struct node* rotateRight(struct node* x)
{
  struct node* y=x->left;
  struct node* w=y->right;
  y->right=x;
  x->left=w;
   x->height = 1 + max(getHeight(x->left), getHeight(x->right));
    y->height = 1 + max(getHeight(y->left), getHeight(y->right));
  return y;
}
struct node* LL(struct node* t)
{
  t=rotateRight(t);
  return t;
}
struct node* RR(struct node* t)
{
  t=rotateLeft(t);
  return t;
}
struct node* LR(struct node* x)
{
  struct node* y=x->left;
  struct node* z=rotateLeft(y);
  x->left=z;
  z=rotateRight(x);
  return z;
}
struct node* RL(struct node* x)
{
  struct node* y=x->right;
  struct node* z=rotateRight(y);
  x->right=z;
  z=rotateLeft(x);
  return z;
}

// int balance(struct node* t)
// {
//   int hl,hr;
//   if(t->left==NULL)
//   {
//    hl=0;
//   }
//   else{
//     hl=1+t->left->height;
//   }
//   if(t->right==NULL)
//   {
//     hr=0;
//   }
//   else
//   {
//     hr=1+t->right->height;
//   }
//   return hl-hr;

// }
struct node* BSTInsert(struct node* t, int x) {
    if (t == NULL) {
        return makeNode(x);
    }
    if (x < t->data) {
        t->left = BSTInsert(t->left, x);
    } else if (x > t->data) {
        t->right = BSTInsert(t->right, x);
    } else {
        
        return t;
    }
    t->height = 1 + max(getHeight(t->left), getHeight(t->right));
    int bal = balance(t);
    if (bal == 2) {
        if (x < t->left->data) {
            return LL(t);
        } else {
            return LR(t);
        }
    }
    if (bal ==-2) {
        if (x > t->right->data) {
            return RR(t);
        } else {
            return RL(t);
        }
    }
    return t;
}

// struct node* BSTInsert(struct node* t,int x)
// {
//   if(t==NULL)
//   {
//     t=makeNode(x);
//   }
//   else{
//     if(x<t->data)
//     {
//       t->left=BSTInsert(t->left,x);
//       if(balance(t)==2)
//       {
//         if(x<t->left->data)
//         {
//           t=LL(t);
//         }
//         else{
//           t=LR(t);
//         }
//       }
//     }
//     else{
//       t->right=BSTInsert(t->right,x);
//       if(balance(t)==-2)
//       {
//         if(x>t->right->data)
//         {
//           t=RR(t);
//         }
//         else{
//           t=RL(t);
//         }
//       }
//     }
//   }
//   return t;
// }
void inOrderTraversal(struct node *t)
{
  if (t != NULL)
  {
    inOrderTraversal(t->left);
    cout<<t->data<<"->"<<balance(t)<<"  ";
    inOrderTraversal(t->right);
  }
}
int main()
{
  struct node* root=NULL;
  root=BSTInsert(root,3);
  root=BSTInsert(root,10);
  root=BSTInsert(root,11);
  root=BSTInsert(root,12);
  root=BSTInsert(root,2);
  root=BSTInsert(root,6);
  root=BSTInsert(root,7);
  root=BSTInsert(root,9);
  root=BSTInsert(root,1);
  root=BSTInsert(root,8);
  root=BSTInsert(root,4);
  root=BSTInsert(root,5);
  inOrderTraversal(root);
  cout<<"\n";
  // cout<<balance(root->left)<<" "<<balance;

  

  



}
