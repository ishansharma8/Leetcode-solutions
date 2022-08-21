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
  
    vector<int>x;
  
    void recursion(TreeNode* root) {
      if(root==NULL)
        return;
      
      if(root->left)
        recursion(root->left);
      
      x.push_back(root->val);
      
      if(root->right)
        recursion(root->right);
        
    }
  
    vector<int> inorderTraversal(TreeNode* root) {
      recursion(root);
      return x;

    }
};