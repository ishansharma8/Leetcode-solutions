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
  vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
  queue<TreeNode*>q;
	vector<vector<int>>finalans;
	vector<int>ans;
  if(root ==NULL)
    return finalans;


  q.push(root);
  q.push(NULL);   //remember 3 not yet pushed in final ans
  bool flag=1;

  while(!q.empty()){

    TreeNode* curr=q.front();
    q.pop();

    if(curr==NULL && flag==0){
      reverse(ans.begin(),ans.end());
      finalans.push_back(ans);
      ans.clear();
      flag=1;
      

      if(q.size()!=0){
        q.push(NULL);
      }
    }
    
    else if(curr==NULL && flag==1){
      finalans.push_back(ans);
      ans.clear();
      flag=0;
      

      if(q.size()!=0){
        q.push(NULL);
      }
    }


    else{
      ans.push_back(curr->val);
      if(curr->left){
      q.push(curr->left);
    }
    if(curr->right){
      q.push(curr->right);
    }
  }

    }
    return finalans;

}
};