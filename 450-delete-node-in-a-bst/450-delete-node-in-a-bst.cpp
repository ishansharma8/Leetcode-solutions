/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* deleteNode(TreeNode* root, int key) {
      if(root==NULL)return NULL;
      if(key>root->val)
        root->right=deleteNode(root->right,key);
      
      else if(key<root->val)
        root->left=deleteNode(root->left,key);
      
      else{
        if(root->left==NULL && root->right==NULL){  //if leaf node
          return  NULL;
        }
        
        else if( root->left==NULL){  //if u want to delete a node with 
          return root->right;
        }
        else if( root->right==NULL){  //if u want to delete a node with 
          return root->left;
        }
        
        else{                //the root has 2 children
          TreeNode*t=root->left;
          while(t->right!=NULL){
            t=t->right;
            }
          root->val=t->val;
          root->left=deleteNode(root->left,t->val);
        }
        
      }
        return root;
    }
};