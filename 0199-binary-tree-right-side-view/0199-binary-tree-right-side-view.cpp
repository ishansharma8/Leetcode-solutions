class Solution {
public:
  
  void modified_preorder(TreeNode* t,vector<int>& ans,int level){
    if(t==NULL){
      return ;
    }
    
    if(level==ans.size()){
      ans.push_back(t->val);
    }
    modified_preorder(t->right,ans,level+1);
    modified_preorder(t->left,ans,level+1);
  }
    
  vector<int> rightSideView(TreeNode* root) {
      vector<int>ans;
      modified_preorder(root,ans,0);
    return ans;
    }
};