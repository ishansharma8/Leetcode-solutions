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
    unordered_map<TreeNode*,int>ump;
    int finddepth(TreeNode* t){
        
        if(t==NULL)
            return 0;
        if(ump.count(t)==0)
            ump[t]=1+max(finddepth(t->left),finddepth(t->right));
        
        return ump[t];
    }
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {

        if(root==NULL)
            return NULL;
        
        int l=finddepth(root->left);
        int r =finddepth(root->right);
        
        if(l==r)return root;
        
        else if(l>r)
            return lcaDeepestLeaves(root->left);
        else
             return lcaDeepestLeaves(root->right);
    }
};