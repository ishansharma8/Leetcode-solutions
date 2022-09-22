class Solution {
public:
    TreeNode* pruneTree(TreeNode* root) {
       
        //checking for the blank tree.
        
        if(root == NULL)
        {
            return NULL;
        }
        
        //Traversing to the bottom then we start deleting the node which 
        // have 0 as a value so it not disturb the config of the tree.
        
        TreeNode* left = pruneTree(root->left) ;
        root->left = left ;
        TreeNode* right = pruneTree(root->right) ;
        root->right = right ;
        
        
        //Now after traversing at the bottom we can delete the node which have
        //0 as value and deleting the node doest disturb the config.
        
        if(root->val == 0 && root->left == NULL && root->right == NULL)
        {
            return NULL ;
        }
        return root;
    }
};