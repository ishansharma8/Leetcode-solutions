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
  
    int diameterOfBinaryTree(TreeNode* root) {
      if(root==NULL){
        return 0;
      }
      int dia=height(root->left)+height(root->right);
      int ldia=diameterOfBinaryTree(root->left);
      int rdia=diameterOfBinaryTree(root->right);
      
      return max({dia,ldia,rdia});
    }
      
    int height(TreeNode* root){
      if(root==NULL){
        return 0;
      }
      return 1+max(height(root->left),height(root->right));
      
    }
  
  
  
};