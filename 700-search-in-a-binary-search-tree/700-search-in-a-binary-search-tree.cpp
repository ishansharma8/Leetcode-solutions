class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
      
      while(root!=NULL && root->val!=val){
      
      if(val<root->val){
        root=root->left;
      }
      
      else if(val>root->val){
        root=root->right;
      }
      }
    
      
      return root;   
    }
};