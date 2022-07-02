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
    // void inorder(TreeNode* root,unordered_set<int>&s){
    //     if(root==NULL)return ;
    //     inorder(root->left,s);
    //     s.insert(root->val);
    //     inorder(root->right,s);
    // }
    
    void traversetree(TreeNode* &t,unordered_set<int>&s,int k,bool &ans){
        //int k is just an integer so u can pass by ref,though u can pass by value also
        if(t==NULL)return;
        
        s.insert(t->val);
        if(s.find(k-t->val)!=s.end() && (t->val)*2!=k)
            ans=true;
    
        traversetree(t->left,s,k,ans);
        traversetree(t->right,s,k,ans);
    }
   
    
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int>s;
        // inorder(root,s);
        
        bool ans=false;
        traversetree(root,s,k,ans);
        return ans;
    }
};