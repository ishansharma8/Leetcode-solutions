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
    

void preorder(TreeNode*t,int targetsum,vector<int>ans,vector<vector<int>> &twod){
    
   if(t==NULL)return;
    ans.push_back(t->val);
    
    if(!t->right && !t->left && targetsum-t->val==0){        
//         for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//          }cout<<endl;
        
        twod.push_back(ans);
        return;
    }
    
    //ans.push_back(t->val);
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }cout<<endl;

    preorder(t->left,targetsum-(t->val),ans,twod);
    preorder(t->right,targetsum-(t->val),ans,twod);
    ans.pop_back();
    
}
    
    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        vector<int>ans;
        vector<vector<int>>twod;
        preorder(root,targetsum,ans,twod);
        return twod;
    }
};