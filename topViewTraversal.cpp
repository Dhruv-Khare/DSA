#include<iostream>
using namespace std;

int height(TreeNode* t)
{
    if(t==NULL)
      return 0;
    if(t->left==NULL&&t->right==NULL)
    {
        return 0;
    }
    return 1+max(height(t->left),height(t->right));
}
    vector<vector<int>> levelOrder(TreeNode* root) {
         
          int h=height(root);
          vector<vector<int>> dat(h+1);
          vector<vector<int>> w;
          if(root==NULL)
          {
            return w;
          }
           queue<pair<TreeNode*,int>> q;
          q.push({root,0});
         
          while(!q.empty())
          {
            pair<TreeNode*,int> x=q.front();
            TreeNode* node=x.first;
            int level=x.second;
            q.pop();
            dat[level].push_back(node->val);
             if(node->left!=NULL)
            {

                q.push({node->left,level+1});
            }
            if(node->right!=NULL)
            {
                q.push({node->right,level+1}); 
            }
           
          }
          return dat;
        
    }
};
