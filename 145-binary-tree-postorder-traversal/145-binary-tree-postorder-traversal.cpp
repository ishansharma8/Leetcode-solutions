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
        void postorder_helper(TreeNode* root,vector<int>&ans){
        if(root==NULL){
            return;                                 //return vector<int>();
        }
        postorder_helper(root->left,ans);
        postorder_helper(root->right,ans);
        ans.push_back(root->val);
        cout<<root->val;  
        }
    
        vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        postorder_helper(root,ans);
        return ans;
    }
};