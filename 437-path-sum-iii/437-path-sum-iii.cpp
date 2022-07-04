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
    //this fxn takes care of going to all its children nodes

   void continuetraversal(TreeNode* t,long long int currsum, int targetsum,int &counter)
    {
        if(t==NULL)
            return ;  
        currsum+=t->val;
        if(currsum==targetsum)
            counter++;
            
        continuetraversal(t->left,currsum,targetsum,counter);
        continuetraversal(t->right,currsum,targetsum,counter);
    
   }
    
    //this fxn takes care of my starting node
    void everynode(TreeNode* t,int targetsum,int &counter){
        if(t==NULL)
            return ;
        
        continuetraversal(t,0,targetsum,counter);
        everynode(t->left,targetsum,counter);
        everynode(t->right,targetsum,counter);
    }
    
    
    int pathSum(TreeNode* root, int targetsum) {
        
       // int currsum=0;
        int counter=0;
        everynode(root,targetsum,counter);
        return counter;
    }
};