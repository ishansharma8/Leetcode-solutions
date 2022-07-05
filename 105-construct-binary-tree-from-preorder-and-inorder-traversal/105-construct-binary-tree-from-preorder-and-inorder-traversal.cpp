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
    int idx=0;
    //wrote another function to create my own fxn signature
     TreeNode* build(vector<int> &preorder,unordered_map<int,int> &ump,int left,int right)
    { 
        if(left>right)//these are int indexs,base condtn that node doesnot exist
            return NULL;
         
        //if equal that means we hv single node,so this fxn should execute
        
        //now i hv to create a tree,so what would be the value,value will be root node(to create a tree,i need to find out root node nd preoder trav will give root node)
        int val=preorder[idx];
        idx++;//these 2 lines are giving me root
         
        TreeNode *t =new TreeNode(val);//but is rgt and left subtree=NULL
        //now we need to determine its right and left subtree,agar vo krdiya toh aap iske left and right sid k liye build fxn call krdo,ye apneaap chlta rhega
        
        
        //now i have to create a new node or u can say a tree
        //for left subtree it needs to go from 0 to 1(we need to pass range )
        //for right subtree range is 2 to 4
        
        t->left=build(preorder,ump,left,ump[val]-1);
        t->right=build(preorder,ump,ump[val]+1,right);
        return t;
        
    }

    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();  
        
        if(n==0)
            return NULL;
        
        //creating u_map for inorder array so that we get idx of elem we need,it had made our work easy i.e optimised
        
        unordered_map<int,int>ump;
        for(int i=0;i<n;i++)
            ump[inorder[i]]=i;
        
        //now i want to write a function where we can pass 2 integers left&rt so that i can tell u the range ki yha se yha tk tree bnana hai
       
        //1st time i will call this function for the entire tree,nd this fxn returns me a tree
        
        //initially gave left =0 ,right =4,so it saw entire inorder array
        return build(preorder,ump,0,n-1);
         }

};