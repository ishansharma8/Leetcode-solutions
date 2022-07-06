class Solution {
public:
    unordered_map<TreeNode*,int>umap;
    
    int depth(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        
         return umap[root]=1+max(depth(root->left),depth(root->right));
    }
    
    TreeNode* helper(TreeNode* root){
        if(root==NULL)
            return NULL;
        
        int l=umap[root->left];//umap mei jayega,left subtree ki height dega
        int r=umap[root->right];//umap mei jayega,right subtree ki height dega
        
        if(l==r)
            return root;
        else if(l>r)
            return helper(root->left);
        else
            return helper(root->right);
    }
    
    
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        //find the depth of all node and store it in map
        depth(root);
    //     for (auto it = umap.begin(); it != umap.end(); ++it) {
    //     cout << (*it).first->val<< ": " << (*it).second<<endl;
    // }
        return helper(root);

    }
};