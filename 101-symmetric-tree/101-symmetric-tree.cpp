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
    bool helper(TreeNode* r1,TreeNode* r2){
        if(r1==NULL && r2==NULL){
            return true;
        }
        else if(r1!=NULL && r2!=NULL){
            if(r1->val!=r2->val){
                return false;
            }
            else{
                return(helper(r1->left,r2->right) && helper(r1->right,r2->left));
            }
        }
        return false;
    }
    
    bool isSymmetric(TreeNode* root) {
         return helper(root->left,root->right);
        
    }
};