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
    void preorder(TreeNode* t,string curstr,vector<string> &ans){
        if(t==NULL)
            return ;
        
        curstr=curstr+to_string(t->val);//now we want to put an arrow and                                   arrow will be put when u hv an children
        
         if(t->left || t->right)
            curstr+="->";//if none of them exists,means we are the leaf                              node,so push 
        else{
            ans.push_back(curstr);
        }
        
        preorder(t->left,curstr,ans);
        preorder(t->right,curstr,ans);
        
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        string curstr="";//current string initially 0
        
        preorder(root,curstr,ans);
        return ans;
    }
};