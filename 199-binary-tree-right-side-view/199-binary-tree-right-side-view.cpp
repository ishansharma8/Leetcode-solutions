class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
      
      if(root==NULL){
        return {};
      }
      vector<int>ans;
      vector<int>curr;
      
      queue<TreeNode*>q;
      q.push(root);
      
      while(!q.empty()){
        int n=q.size();
        for(int i=0;i<n;i++){
          TreeNode* node=q.front();
          q.pop();
          
          curr.push_back(node->val);
        
          if(node->left){
            q.push(node->left);
          }
          
          if(node->right){
            q.push(node->right);
          } 
        }
        ans.push_back(curr[curr.size()-1]);
        curr.clear();
        
      }
     return ans; 
    }
};