class Solution {
public:
  
    TreeNode* buildTree(vector<int>preorder,int left,int right){
      if(left>right)
        return NULL;

      int root=preorder[left];
      TreeNode*t =new TreeNode(root);
      
      int i=left;
      while(i<right && preorder[i+1]<root){ //bcoz at last i+1 is greater tha nsize of array
        i++;                             //we cant use n as n is local
      }
      
      t->left=buildTree(preorder,left+1,i);
      t->right=buildTree(preorder,i+1,right);
      
      return t;
    }
  
    TreeNode* bstFromPreorder(vector<int>& preorder) {
      int n=preorder.size();
      
      if(n==0)
        return NULL;
      
    return buildTree(preorder,0,n-1);
    }
};