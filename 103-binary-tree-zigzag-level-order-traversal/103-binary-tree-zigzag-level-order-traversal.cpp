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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int>ans;
        vector<vector<int>>twod;
        if(root==NULL)return twod;
        bool flag=true;
        
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty()){
           TreeNode*curr=q.front();
            
            q.pop();
            
            if(curr!=NULL){
                ans.push_back(curr->val);
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
                else{
                    if(flag){
                    twod.push_back(ans);
                    ans.clear();
                    
                    
                    if(q.size()!=0){
                        q.push(NULL);
                    }
                       flag=false; 
                    }
                    
                    else{
                    reverse(ans.begin(),ans.end());
                    twod.push_back(ans);
                    ans.clear();
            
                    if(q.size()!=0){
                        q.push(NULL);
                    }
                       flag=true; 
                    }
                    
                }
        }
        return twod;

    }
};