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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>s;
        vector<int>ans;
        
        while(root!=NULL){
            s.push(root);
            root=root->left;
        }
        while(s.size()!=0){
            TreeNode*top=s.top();
            s.pop();
            
            ans.push_back(top->val);
            if(top->right){
                
                top=top->right;
                //ans.push_back(top->val);
                s.push(top);
                
                while(top->left!=NULL){
                    s.push(top->left);
                    top=top->left;
                }
            }
        }
        return ans;
    }
};