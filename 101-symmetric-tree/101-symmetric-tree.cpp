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
    bool isSymmetric(TreeNode* root) {
      return symmetric(root->left, root->right);
    }
  
  bool symmetric(TreeNode* node1,TreeNode* node2){
    if(node1==NULL && node2==NULL){
      return true;
    }
    
    else if(node1!=NULL && node2!=NULL && node1->val==node2->val){
      bool ans1=symmetric(node1->right,node2->left);
      bool ans2=symmetric(node1->left,node2->right);
      if(ans1==true && ans2==true)
        return true;
    }
    
    else{
      return false;
    }
    return false;
  }
  
  
};