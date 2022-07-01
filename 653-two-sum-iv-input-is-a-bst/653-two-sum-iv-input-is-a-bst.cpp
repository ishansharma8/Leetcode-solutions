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
    void helper(TreeNode* root,vector<int>&ans){
        if(root==NULL)return;
        helper(root->left,ans);
        ans.push_back(root->val);
        helper(root->right,ans);
    }
    
    bool findTarget(TreeNode* root, int k) {
         vector<int>ans;
         helper(root,ans);
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
         
        int n=ans.size();
        int start=0;
        int end=n-1;
        
        while(start<end){
            if(ans[start]+ans[end]>k){
                end--;
            }
            else if(ans[start]+ans[end]<k){
                start++;
            }
            else{
                return true;
            }
        }
         return false;
    }
};