
class Solution {
public:
    int i=0;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)return true;
        if(p==NULL && q!=NULL)return false;
        if(p!=NULL && q==NULL)return false;
        
        bool leftvala=false;
        bool rightvala=false;
        cout<<i<<endl;
        i++;
        
        if(p->left==NULL && q->left==NULL){
            leftvala=true;
            
            if(p->val!=q->val)leftvala=false;//comparing the root,can also compare in right
        }
        if(p->left!=NULL && q->left!=NULL){
         if (p->left->val==q->left->val){
            leftvala=true;
         }
        }
        
         if(p->right==NULL && q->right==NULL){
            rightvala=true;
        }
        
         if(p->right!=NULL && q->right!=NULL){
         if(p->right->val==q->right->val){
            rightvala=true;
        }
             }
        
        if(leftvala && rightvala){
        return (isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        }
        return false;
    }
};